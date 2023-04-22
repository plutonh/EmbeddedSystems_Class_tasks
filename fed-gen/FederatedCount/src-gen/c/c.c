// Code generated by the Lingua Franca compiler from:
// file://home/plutonh/project/fed-gen/FederatedCount/src/c.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/home/plutonh/project/fed-gen/FederatedCount/src-gen/c"
#include "include/api/api.h"
#include "core/reactor.h"
#include "core/reactor_common.h"
#include "core/threaded/scheduler.h"
#include "core/mixed_radix.h"
#include "core/port.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "core/federated/federate.h"
#include "core/federated/net_common.h"
#include "include/_c_preamble.h"
int main(int argc, const char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
const char* _lf_default_argv[] = { "dummy", "-k", "true" };
void _lf_set_default_command_line_options() {
        default_argc = 3;
        default_argv = _lf_default_argv;
}
// =============== START reactor class Count
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_sparse_io_record_t* sparse_record;
    int destination_channel;
    int num_destinations;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} count_out_t;
typedef struct {
    struct self_base_t base;
    #line 18 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    int c;
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    count_out_t _lf_out;
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    int _lf_out_width;
    #line 21 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    reaction_t _lf__reaction_0;
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    trigger_t _lf__t;
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    reaction_t* _lf__t_reactions[1];
} count_self_t;
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void countreaction_function_0(void* instance_args) {
    count_self_t* self = (count_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    count_out_t* out = &self->_lf_out;
    #line 23 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    lf_set(out, self->c++);
}
#include "include/api/set_undef.h"
count_self_t* new_Count() {
    count_self_t* self = (count_self_t*)_lf_new_reactor(sizeof(count_self_t));
    #line 21 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.number = 0;
    #line 21 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.function = countreaction_function_0;
    #line 21 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.self = self;
    #line 21 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 21 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 21 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.name = "?";
    #line 21 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__t.last = NULL;
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__t.number_of_reactions = 1;
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #ifdef FEDERATED
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 19 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    return self;
}
// =============== END reactor class Count
// =============== START reactor class c
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    bool has_value;
    trigger_t* trigger;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} c_outputControlReactionTrigger_t;
typedef struct {
    struct self_base_t base;
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    c_outputControlReactionTrigger_t _lf_outputControlReactionTrigger;
    struct {
        #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
        count_out_t* out;
        #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
        trigger_t out_trigger;
        #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
        reaction_t* out_reactions[1];
    } _lf_c;
    int _lf_c_width;
    #line 32 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    reaction_t _lf__reaction_0;
    #line 40 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    reaction_t _lf__reaction_1;
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    trigger_t _lf__outputControlReactionTrigger;
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    reaction_t* _lf__outputControlReactionTrigger_reactions[1];
} c_main_self_t;
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void c_mainreaction_function_0(void* instance_args) {
    c_main_self_t* self = (c_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct c {
        count_out_t* out;
    
    } c;
    c.out = self->_lf_c.out;
    #line 34 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    // **** This reaction is unordered.
    // Sending from c.out in federate c to p.in in federate p
    if (!c.out->is_present) return;
    size_t message_length = sizeof(int);
    send_timed_message(NEVER, MSG_TYPE_TAGGED_MESSAGE, 0, 1, "federate 1 via the RTI", message_length, (unsigned char*)&c.out->value);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void c_mainreaction_function_1(void* instance_args) {
    c_main_self_t* self = (c_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct c {
        count_out_t* out;
    
    } c;
    // Expose the action struct as a local variable whose name matches the action name.
    c_outputControlReactionTrigger_t* outputControlReactionTrigger = &self->_lf_outputControlReactionTrigger;
    // Set the fields of the action struct to match the current trigger.
    outputControlReactionTrigger->is_present = (bool)self->_lf__outputControlReactionTrigger.status;
    outputControlReactionTrigger->has_value = ((self->_lf__outputControlReactionTrigger.tmplt.token) != NULL && (self->_lf__outputControlReactionTrigger.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)outputControlReactionTrigger, (self->_lf__outputControlReactionTrigger.tmplt.token));
    c.out = self->_lf_c.out;
    #line 42 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    // **** This reaction is unordered.
    // If the output port has not been lf_set for the current logical time,
    // send an ABSENT message to the receiving federate
    LF_PRINT_LOG("Contemplating whether to send port "
              "absent for port %d to federate %d.",
              0, 1);
    if (c.out == NULL || !c.out->is_present) {
        // The output port is NULL or it is not present.
        send_port_absent_to_federate(NEVER, 0, 1);
    }
}
#include "include/api/set_undef.h"
c_main_self_t* new_c() {
    c_main_self_t* self = (c_main_self_t*)_lf_new_reactor(sizeof(c_main_self_t));
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf_outputControlReactionTrigger.trigger = &self->_lf__outputControlReactionTrigger;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_c_width = -2;
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf_c.out_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf_c.out_reactions[0] = &self->_lf__reaction_0;
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf_c.out_trigger.reactions = self->_lf_c.out_reactions;
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf_c.out_trigger.last = NULL;
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf_c.out_trigger.number_of_reactions = 1;
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #ifdef FEDERATED
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf_c.out_trigger.physical_time_of_arrival = NEVER;
    #line 17 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #endif // FEDERATED
    #line 32 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.number = 0;
    #line 32 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.function = c_mainreaction_function_0;
    #line 32 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.self = self;
    #line 32 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 32 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 32 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.name = "?";
    #line 32 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 40 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_1.number = 1;
    #line 40 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_1.function = c_mainreaction_function_1;
    #line 40 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_1.self = self;
    #line 40 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 40 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 40 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_1.name = "?";
    #line 40 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__outputControlReactionTrigger.last = NULL;
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__outputControlReactionTrigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__outputControlReactionTrigger_reactions[0] = &self->_lf__reaction_1;
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__outputControlReactionTrigger.reactions = &self->_lf__outputControlReactionTrigger_reactions[0];
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__outputControlReactionTrigger.number_of_reactions = 1;
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #ifdef FEDERATED
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    self->_lf__outputControlReactionTrigger.physical_time_of_arrival = NEVER;
    #line 29 "/home/plutonh/project/fed-gen/FederatedCount/src/c.lf"
    #endif // FEDERATED
    self->_lf__outputControlReactionTrigger.is_physical = false;
    
    self->_lf__outputControlReactionTrigger.tmplt.type.element_size = 0;
    self->_lf_outputControlReactionTrigger.type.element_size = 0;
    return self;
}
// =============== END reactor class c
// Array of pointers to timer triggers to be scheduled in _lf_initialize_timers().
trigger_t* _lf_timer_triggers[1];
int _lf_timer_triggers_size = 1;
// Array of pointers to startup triggers.
reaction_t** _lf_startup_reactions = NULL;
int _lf_startup_reactions_size = 0;
// Array of pointers to shutdown triggers.
reaction_t** _lf_shutdown_reactions = NULL;
int _lf_shutdown_reactions_size = 0;
// Array of pointers to reset triggers.
reaction_t** _lf_reset_reactions = NULL;
int _lf_reset_reactions_size = 0;
void _lf_initialize_trigger_objects() {
    // Initialize the _lf_clock
    lf_initialize_clock();
    // Create the array that will contain pointers to is_present fields to reset on each step.
    _lf_is_present_fields_size = 2;
    _lf_is_present_fields = (bool**)calloc(2, sizeof(bool*));
    if (_lf_is_present_fields == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated = (bool**)calloc(2, sizeof(bool*));
    if (_lf_is_present_fields_abbreviated == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated_size = 0;
    #ifdef FEDERATED_DECENTRALIZED
    // Create the array that will contain pointers to intended_tag fields to reset on each step.
    _lf_intended_tag_fields_size = 2;
    _lf_intended_tag_fields = (tag_t**)malloc(_lf_intended_tag_fields_size * sizeof(tag_t*));
    
    #endif // FEDERATED_DECENTRALIZED
    int _lf_startup_reactions_count = 0;
    SUPPRESS_UNUSED_WARNING(_lf_startup_reactions_count);
    int _lf_shutdown_reactions_count = 0;
    SUPPRESS_UNUSED_WARNING(_lf_shutdown_reactions_count);
    int _lf_reset_reactions_count = 0;
    SUPPRESS_UNUSED_WARNING(_lf_reset_reactions_count);
    int _lf_timer_triggers_count = 0;
    SUPPRESS_UNUSED_WARNING(_lf_timer_triggers_count);
    int bank_index;
    SUPPRESS_UNUSED_WARNING(bank_index);
    c_main_self_t* c_main_self[1];
    SUPPRESS_UNUSED_WARNING(c_main_self);
    count_self_t* c_c_self[1];
    SUPPRESS_UNUSED_WARNING(c_c_self);
    // ***** Start initializing c of class c
    c_main_self[0] = new_c();
    bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
    // Initializing action c.outputControlReactionTrigger
    c_main_self[0]->_lf__outputControlReactionTrigger.offset = 0;
    c_main_self[0]->_lf__outputControlReactionTrigger.period = -1;
    c_main_self[0]->_lf__outputControlReactionTrigger.mode = NULL;
    _lf_initialize_template((token_template_t*)
            &(c_main_self[0]->_lf__outputControlReactionTrigger),
    0);
    c_main_self[0]->_lf__outputControlReactionTrigger.status = absent;
    c_main_self[0]->_lf__reaction_0.deadline = NEVER;
    c_main_self[0]->_lf__reaction_1.deadline = NEVER;
    {
        // ***** Start initializing c.c of class Count
        c_c_self[0] = new_Count();
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        // width of -2 indicates that it is not a multiport.
        c_c_self[0]->_lf_out_width = -2;
        { // For scoping
            static int _initial = 0;
            c_c_self[0]->c = _initial;
        } // End scoping.
        // Initializing timer c.c.t.
        c_c_self[0]->_lf__t.offset = 0;
        c_c_self[0]->_lf__t.period = SEC(1);
        _lf_timer_triggers[_lf_timer_triggers_count++] = &c_c_self[0]->_lf__t;
        c_c_self[0]->_lf__t.mode = NULL;
        c_c_self[0]->_lf__reaction_0.deadline = NEVER;
        //***** End initializing c.c
    }
    //***** End initializing c
    // **** Start deferred initialize for c
    {
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_0 of c.
        c_main_self[0]->_lf__reaction_0.num_outputs = 0;
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
        }
        
        // ** End initialization for reaction 0 of c
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_1 of c.
        c_main_self[0]->_lf__reaction_1.num_outputs = 0;
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
        }
        
        // ** End initialization for reaction 1 of c
        // **** Start deferred initialize for c.c
        {
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of c.c.
            c_c_self[0]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            c_c_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &c_c_self[0]->base.allocations);
            c_c_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &c_c_self[0]->base.allocations);
            c_c_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &c_c_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    c_c_self[0]->_lf__reaction_0.output_produced[count++] = &c_c_self[0]->_lf_out.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of c.c
        }
        // **** End of deferred initialize for c.c
    }
    // **** End of deferred initialize for c
    // **** Start non-nested deferred initialize for c
    // **** Start non-nested deferred initialize for c.c
    // For reference counting, set num_destinations for port c.c.out.
    // Iterate over range c.c.out(0,1)->[c.c.out(0,1)].
    {
        int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
        int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
        int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
        c_c_self[src_runtime]->_lf_out.num_destinations = 1;
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range c.c.out(0,1)->[c.c.out(0,1)].
        {
            int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
            int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
            int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            // Reaction 0 of c.c triggers 1 downstream reactions
            // through port c.c.out.
            c_c_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 0 of c.c, allocate an
            // array of trigger pointers for downstream reactions through port c.c.out
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &c_c_self[src_runtime]->base.allocations); 
            c_c_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges c.c.out(0,1)->[c.c.out(0,1)] and c.c.out(0,1).
        {
            int src_runtime = 0; // Runtime index.
            SUPPRESS_UNUSED_WARNING(src_runtime);
            int src_channel = 0; // Channel index.
            SUPPRESS_UNUSED_WARNING(src_channel);
            int src_bank = 0; // Bank index.
            SUPPRESS_UNUSED_WARNING(src_bank);
            // Iterate over range c.c.out(0,1).
            {
                int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                // Port c.c.out has reactions in its parent's parent.
                // Point to the trigger struct for those reactions.
                c_c_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &c_main_self[dst_runtime]->_lf_c.out_trigger;
            }
        }
    }
    // **** End of non-nested deferred initialize for c.c
    // **** End of non-nested deferred initialize for c
    // Connect inputs and outputs for reactor c.
    // Connect inputs and outputs for reactor c.c.
    // Connect c.c.out(0,1)->[c.c.out(0,1)] to port c.c.out(0,1)
    // Iterate over ranges c.c.out(0,1)->[c.c.out(0,1)] and c.c.out(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range c.c.out(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            c_main_self[dst_runtime]->_lf_c.out = (count_out_t*)&c_c_self[src_runtime]->_lf_out;
        }
    }
    {
    }
    {
        // Add action c.outputControlReactionTrigger to array of is_present fields.
        _lf_is_present_fields[0] 
                = &c_main_self[0]->_lf_outputControlReactionTrigger.is_present;
        #ifdef FEDERATED_DECENTRALIZED
        // Add action c.outputControlReactionTrigger to array of intended_tag fields.
        _lf_intended_tag_fields[0] 
                = &c_main_self[0]->_lf_outputControlReactionTrigger.intended_tag;
        #endif // FEDERATED_DECENTRALIZED
    }
    {
        int count = 0; SUPPRESS_UNUSED_WARNING(count);
        {
            // Add port c.c.out to array of is_present fields.
            _lf_is_present_fields[1 + count] = &c_c_self[0]->_lf_out.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port c.c.out to array of intended_tag fields.
            _lf_intended_tag_fields[1 + count] = &c_c_self[0]->_lf_out.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
        }
    }
    // Set reaction priorities for ReactorInstance c
    {
        c_main_self[0]->_lf__reaction_0.chain_id = 1;
        // index is the OR of level 1 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        c_main_self[0]->_lf__reaction_0.index = 0xffffffffffff0001LL;
        c_main_self[0]->_lf__reaction_1.chain_id = 1;
        // index is the OR of level 1 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        c_main_self[0]->_lf__reaction_1.index = 0xffffffffffff0001LL;
        // Set reaction priorities for ReactorInstance c.c
        {
            c_c_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            c_c_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
        }
    }
    // Initialize the scheduler
    size_t num_reactions_per_level[2] = 
        {1, 2};
    sched_params_t sched_params = (sched_params_t) {
                            .num_reactions_per_level = &num_reactions_per_level[0],
                            .num_reactions_per_level_size = (size_t) 2};
    lf_sched_init(
        (size_t)_lf_number_of_workers,
        &sched_params
    );
    #ifdef EXECUTABLE_PREAMBLE
    _lf_executable_preamble();
    #endif
    #ifdef FEDERATED
    initialize_triggers_for_federate();
    #endif // FEDERATED
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
#ifdef FEDERATED_CENTRALIZED
        _lf_logical_tag_complete(tag_to_send);
#endif // FEDERATED_CENTRALIZED

}
bool _lf_trigger_shutdown_reactions() {
    return false;
}
#ifndef FEDERATED
void terminate_execution() {}
#endif