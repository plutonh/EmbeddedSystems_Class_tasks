// Code generated by the Lingua Franca compiler from:
// file://home/plutonh/project/src/CountTestC.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/home/plutonh/project/src-gen/CountTestC"
#include "include/ctarget/ctarget.h"
#include "core/threaded/reactor_threaded.c"
#include "core/threaded/scheduler.h"
#include "core/mixed_radix.h"
int main(int argc, char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
char* _lf_default_argv[] = { "dummy", "-o", "3", "sec" };
void _lf_set_default_command_line_options() {
        default_argc = 4;
        default_argv = _lf_default_argv;
}
// =============== START reactor class Count
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} count_out_t;
typedef struct {
    struct self_base_t base;
    interval_t offset;
    interval_t period;
    int stride;
    int count;
    count_out_t _lf_out;
    int _lf_out_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
} count_self_t;
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/ctarget/set.h"
void countreaction_function_0(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    count_self_t* self = (count_self_t*)instance_args;
    count_out_t* out = &self->_lf_out;
    #pragma GCC diagnostic pop
    lf_set(out, self->count);
    self->count += self->stride;
}
#include "include/ctarget/set_undef.h"
count_self_t* new_Count() {
    count_self_t* self = (count_self_t*)_lf_new_reactor(sizeof(count_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = countreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__t.last = NULL;
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    self->_lf__t.is_timer = true;
    return self;
}
// =============== END reactor class Count
// =============== START reactor class TestCount
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} testcount_in_t;
typedef struct {
    struct self_base_t base;
    int start;
    int stride;
    int num_inputs;
    int count;
    int inputs_received;
    testcount_in_t* _lf_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_in_width;
    // Default input (in case it does not get connected)
    testcount_in_t _lf_default__in;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    trigger_t _lf__in;
    reaction_t* _lf__in_reactions[1];
} testcount_self_t;
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/ctarget/set.h"
void testcountreaction_function_0(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    testcount_self_t* self = (testcount_self_t*)instance_args;
    testcount_in_t* in = self->_lf_in;
    int in_width = self->_lf_in_width;
    #pragma GCC diagnostic pop
    lf_print("Received %d.", in->value);
    // Checks if the input port value and count matches.
    if (in->value != self->count) {
    lf_print_error_and_exit("Expected %d.", self->count);
    }
    self->count += self->stride;
    self->inputs_received++;
}
#include "include/ctarget/set_undef.h"
#include "include/ctarget/set.h"
void testcountreaction_function_1(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    testcount_self_t* self = (testcount_self_t*)instance_args;
    #pragma GCC diagnostic pop
    lf_print("Shutdown invoked.");
    if (self->inputs_received != self->num_inputs) {
    lf_print_error_and_exit("Expected to receive %d inputs, but got %d.",
    self->num_inputs,
       self->inputs_received
    );
    }
}
#include "include/ctarget/set_undef.h"
testcount_self_t* new_TestCount() {
    testcount_self_t* self = (testcount_self_t*)_lf_new_reactor(sizeof(testcount_self_t));
    // Set input by default to an always absent default input.
    self->_lf_in = &self->_lf_default__in;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = testcountreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = testcountreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__shutdown_reactions[0] = &self->_lf__reaction_1;
    self->_lf__shutdown.last = NULL;
    self->_lf__shutdown.reactions = &self->_lf__shutdown_reactions[0];
    self->_lf__shutdown.number_of_reactions = 1;
    self->_lf__shutdown.is_timer = false;
    self->_lf__in.last = NULL;
    self->_lf__in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__in.reactions = &self->_lf__in_reactions[0];
    self->_lf__in.number_of_reactions = 1;
    self->_lf__in.element_size = sizeof(int);
    return self;
}
// =============== END reactor class TestCount
// =============== START reactor class CountTestC
typedef struct {
    struct self_base_t base;
} counttestc_self_t;
// ***** Start of method declarations.
// ***** End of method declarations.
counttestc_self_t* new_CountTestC() {
    counttestc_self_t* self = (counttestc_self_t*)_lf_new_reactor(sizeof(counttestc_self_t));
    return self;
}
// =============== END reactor class CountTestC
// Array of pointers to timer triggers to be scheduled in _lf_initialize_timers().
trigger_t* _lf_timer_triggers[1];
int _lf_timer_triggers_size = 1;
// Array of pointers to startup triggers.
reaction_t** _lf_startup_reactions = NULL;
int _lf_startup_reactions_size = 0;
// Array of pointers to shutdown triggers.
reaction_t* _lf_shutdown_reactions[1];
int _lf_shutdown_reactions_size = 1;
// Array of pointers to reset triggers.
reaction_t** _lf_reset_reactions = NULL;
int _lf_reset_reactions_size = 0;
trigger_t* _lf_action_for_port(int port_id) {
        return NULL;
}
void _lf_initialize_trigger_objects() {
    // Initialize the _lf_clock
    lf_initialize_clock();
    // Create the array that will contain pointers to is_present fields to reset on each step.
    _lf_is_present_fields_size = 1;
    _lf_is_present_fields = (bool**)calloc(1, sizeof(bool*));
    if (_lf_is_present_fields == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated = (bool**)calloc(1, sizeof(bool*));
    if (_lf_is_present_fields_abbreviated == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated_size = 0;
    int _lf_startup_reactions_count = 0;
    int _lf_shutdown_reactions_count = 0;
    int _lf_reset_reactions_count = 0;
    int _lf_timer_triggers_count = 0;
    int _lf_tokens_with_ref_count_count = 0;
    counttestc_self_t* counttestc_self[1];
    count_self_t* counttestc_count_self[1];
    testcount_self_t* counttestc_test_self[1];
    // ***** Start initializing CountTestC of class CountTestC
    counttestc_self[0] = new_CountTestC();
    int bank_index = 0;
    {
        // ***** Start initializing CountTestC.count of class Count
        counttestc_count_self[0] = new_Count();
        int bank_index = 0;
        counttestc_count_self[0]->offset = 0;
        counttestc_count_self[0]->period = SEC(1);
        counttestc_count_self[0]->stride = 3;
        // width of -2 indicates that it is not a multiport.
        counttestc_count_self[0]->_lf_out_width = -2;
        { // For scoping
            static int _initial = 1;
            counttestc_count_self[0]->count = _initial;
        } // End scoping.
        // Initializing timer CountTestC.count.t.
        counttestc_count_self[0]->_lf__t.offset = 0;
        counttestc_count_self[0]->_lf__t.period = SEC(1);
        _lf_timer_triggers[_lf_timer_triggers_count++] = &counttestc_count_self[0]->_lf__t;
        counttestc_count_self[0]->_lf__t.mode = NULL;
        counttestc_count_self[0]->_lf__reaction_0.deadline = NEVER;
        //***** End initializing CountTestC.count
    }
    {
        // ***** Start initializing CountTestC.test of class TestCount
        counttestc_test_self[0] = new_TestCount();
        int bank_index = 0;
        counttestc_test_self[0]->start = 1;
        counttestc_test_self[0]->stride = 3;
        counttestc_test_self[0]->num_inputs = 4;
        // width of -2 indicates that it is not a multiport.
        counttestc_test_self[0]->_lf_in_width = -2;
        _lf_shutdown_reactions[_lf_shutdown_reactions_count++] = &counttestc_test_self[0]->_lf__reaction_1;
        counttestc_test_self[0]->count = counttestc_test_self[0]->start;
        { // For scoping
            static int _initial = 0;
            counttestc_test_self[0]->inputs_received = _initial;
        } // End scoping.
        counttestc_test_self[0]->_lf__reaction_0.deadline = NEVER;
        counttestc_test_self[0]->_lf__reaction_1.deadline = NEVER;
        //***** End initializing CountTestC.test
    }
    //***** End initializing CountTestC
    // **** Start deferred initialize for CountTestC
    {
        // **** Start deferred initialize for CountTestC.count
        {
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of CountTestC.count.
            counttestc_count_self[0]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            counttestc_count_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &counttestc_count_self[0]->base.allocations);
            counttestc_count_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &counttestc_count_self[0]->base.allocations);
            counttestc_count_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &counttestc_count_self[0]->base.allocations);
            {
                int count = 0;
                {
                    counttestc_count_self[0]->_lf__reaction_0.output_produced[count++] = &counttestc_count_self[0]->_lf_out.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of CountTestC.count
        }
        // **** End of deferred initialize for CountTestC.count
        // **** Start deferred initialize for CountTestC.test
        {
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of CountTestC.test.
            counttestc_test_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0;
            }
            
            // ** End initialization for reaction 0 of CountTestC.test
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of CountTestC.test.
            counttestc_test_self[0]->_lf__reaction_1.num_outputs = 0;
            {
                int count = 0;
            }
            
            // ** End initialization for reaction 1 of CountTestC.test
        }
        // **** End of deferred initialize for CountTestC.test
    }
    // **** End of deferred initialize for CountTestC
    // **** Start non-nested deferred initialize for CountTestC
    // **** Start non-nested deferred initialize for CountTestC.count
    // For reference counting, set num_destinations for port CountTestC.count.out.
    // Iterate over range CountTestC.count.out(0,1)->[CountTestC.test.in(0,1)].
    {
        int src_runtime = 0; // Runtime index.
        int src_channel = 0; // Channel index.
        int src_bank = 0; // Bank index.
        int range_count = 0;
        counttestc_count_self[src_runtime]->_lf_out.num_destinations = 1;
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range CountTestC.count.out(0,1)->[CountTestC.test.in(0,1)].
        {
            int src_runtime = 0; // Runtime index.
            int src_channel = 0; // Channel index.
            int src_bank = 0; // Bank index.
            int range_count = 0;
            // Reaction 0 of CountTestC.count triggers 1 downstream reactions
            // through port CountTestC.count.out.
            counttestc_count_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 0 of CountTestC.count, allocate an
            // array of trigger pointers for downstream reactions through port CountTestC.count.out
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &counttestc_count_self[src_runtime]->base.allocations); 
            counttestc_count_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges CountTestC.count.out(0,1)->[CountTestC.test.in(0,1)] and CountTestC.test.in(0,1).
        {
            int src_runtime = 0; // Runtime index.
            int src_channel = 0; // Channel index.
            int src_bank = 0; // Bank index.
            // Iterate over range CountTestC.test.in(0,1).
            {
                int dst_runtime = 0; // Runtime index.
                int dst_channel = 0; // Channel index.
                int dst_bank = 0; // Bank index.
                int range_count = 0;
                // Point to destination port CountTestC.test.in's trigger struct.
                counttestc_count_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &counttestc_test_self[dst_runtime]->_lf__in;
            }
        }
    }
    // **** End of non-nested deferred initialize for CountTestC.count
    // **** Start non-nested deferred initialize for CountTestC.test
    // **** End of non-nested deferred initialize for CountTestC.test
    // **** End of non-nested deferred initialize for CountTestC
    // Connect inputs and outputs for reactor CountTestC.
    // Connect inputs and outputs for reactor CountTestC.count.
    // Connect CountTestC.count.out(0,1)->[CountTestC.test.in(0,1)] to port CountTestC.test.in(0,1)
    // Iterate over ranges CountTestC.count.out(0,1)->[CountTestC.test.in(0,1)] and CountTestC.test.in(0,1).
    {
        int src_runtime = 0; // Runtime index.
        int src_channel = 0; // Channel index.
        int src_bank = 0; // Bank index.
        // Iterate over range CountTestC.test.in(0,1).
        {
            int dst_runtime = 0; // Runtime index.
            int dst_channel = 0; // Channel index.
            int dst_bank = 0; // Bank index.
            int range_count = 0;
            counttestc_test_self[dst_runtime]->_lf_in = (testcount_in_t*)&counttestc_count_self[src_runtime]->_lf_out;
        }
    }
    // Connect inputs and outputs for reactor CountTestC.test.
    {
    }
    {
    }
    {
        int count = 0;
        {
            // Add port CountTestC.count.out to array of is_present fields.
            _lf_is_present_fields[0 + count] = &counttestc_count_self[0]->_lf_out.is_present;
            count++;
        }
    }
    // Set reaction priorities for ReactorInstance CountTestC
    {
        // Set reaction priorities for ReactorInstance CountTestC.count
        {
            counttestc_count_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 140737488355327 shifted left 16 bits.
            counttestc_count_self[0]->_lf__reaction_0.index = 0x7fffffffffff0000LL;
        }
        // Set reaction priorities for ReactorInstance CountTestC.test
        {
            counttestc_test_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 1 and 
            // deadline 140737488355327 shifted left 16 bits.
            counttestc_test_self[0]->_lf__reaction_0.index = 0x7fffffffffff0001LL;
            counttestc_test_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 2 and 
            // deadline 140737488355327 shifted left 16 bits.
            counttestc_test_self[0]->_lf__reaction_1.index = 0x7fffffffffff0002LL;
        }
    }
    // Initialize the scheduler
    size_t num_reactions_per_level[3] = 
        {1, 1, 1};
    sched_params_t sched_params = (sched_params_t) {
                            .num_reactions_per_level = &num_reactions_per_level[0],
                            .num_reactions_per_level_size = (size_t) 3};
    lf_sched_init(
        (size_t)_lf_number_of_workers,
        &sched_params
    );
}
void _lf_trigger_startup_reactions() {}
void _lf_initialize_timers() {
    for (int i = 0; i < _lf_timer_triggers_size; i++) {
        if (_lf_timer_triggers[i] != NULL) {
            _lf_initialize_timer(_lf_timer_triggers[i]);
        }
    }
}
void logical_tag_complete(tag_t tag_to_send) {
}
bool _lf_trigger_shutdown_reactions() {
    for (int i = 0; i < _lf_shutdown_reactions_size; i++) {
        if (_lf_shutdown_reactions[i] != NULL) {
            _lf_trigger_reaction(_lf_shutdown_reactions[i], -1);
        }
    }
    return true;
}
void terminate_execution() {}
