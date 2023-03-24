// Code generated by the Lingua Franca compiler from:
// file://home/plutonh/project/src/CountTestPy.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/home/plutonh/project/src-gen/CountTestPy"
#define _LF_GARBAGE_COLLECTED
#include "include/ctarget/ctarget.h"
#include "core/reactor.c"
#include "core/mixed_radix.h"
#include "pythontarget.c"
int main(int argc, char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
char* _lf_default_argv[] = { "dummy", "-o", "3", "sec" };
void _lf_set_default_command_line_options() {
        default_argc = 4;
        default_argv = _lf_default_argv;
}
// =============== START reactor class Count
#line 6 "file:/home/plutonh/project/src/CountTestPy.lf"
typedef generic_port_instance_struct count_out_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    #line 4 "file:/home/plutonh/project/src/CountTestPy.lf"
    PyObject* offset;
    #line 4 "file:/home/plutonh/project/src/CountTestPy.lf"
    interval_t period;
    #line 4 "file:/home/plutonh/project/src/CountTestPy.lf"
    PyObject* stride;
    #line 5 "file:/home/plutonh/project/src/CountTestPy.lf"
    PyObject* count;
    #line 6 "file:/home/plutonh/project/src/CountTestPy.lf"
    count_out_t _lf_out;
    #line 6 "file:/home/plutonh/project/src/CountTestPy.lf"
    int _lf_out_width;
    #line 8 "file:/home/plutonh/project/src/CountTestPy.lf"
    reaction_t _lf__reaction_0;
    #line 7 "file:/home/plutonh/project/src/CountTestPy.lf"
    trigger_t _lf__t;
    #line 7 "file:/home/plutonh/project/src/CountTestPy.lf"
    reaction_t* _lf__t_reactions[1];
} count_self_t;
#include "include/ctarget/set.h"
void countreaction_function_0(void* instance_args){
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    count_self_t* self = (count_self_t*)instance_args;
    count_out_t* out = &self->_lf_out;
    #pragma GCC diagnostic pop
    #line 9 "file:/home/plutonh/project/src/CountTestPy.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function Count.reaction_function_0");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        Py_BuildValue("(O)", convert_C_port_to_py(out, -2))
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction Count.reaction_function_0 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        Py_FinalizeEx();
        exit(1);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/ctarget/set_undef.h"
count_self_t* new_Count() {
    count_self_t* self = (count_self_t*)_lf_new_reactor(sizeof(count_self_t));
    #line 8 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.number = 0;
    #line 8 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.function = countreaction_function_0;
    #line 8 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.self = self;
    #line 8 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 8 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 8 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.name = "?";
    #line 8 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 7 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__t.last = NULL;
    #line 7 "file:/home/plutonh/project/src/CountTestPy.lf"
    #line 7 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    #line 7 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 7 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__t.number_of_reactions = 1;
    self->_lf__t.is_timer = true;
    return self;
}
// =============== END reactor class Count
// =============== START reactor class Test
#line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
typedef generic_port_instance_struct test_c_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    #line 13 "file:/home/plutonh/project/src/CountTestPy.lf"
    PyObject* stride;
    #line 13 "file:/home/plutonh/project/src/CountTestPy.lf"
    PyObject* num_inputs;
    #line 15 "file:/home/plutonh/project/src/CountTestPy.lf"
    PyObject* i;
    #line 16 "file:/home/plutonh/project/src/CountTestPy.lf"
    PyObject* num_reacted;
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    test_c_t* _lf_c;
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    // width of -2 indicates that it is not a multiport.
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    int _lf_c_width;
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    // Default input (in case it does not get connected)
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    test_c_t _lf_default__c;
    #line 17 "file:/home/plutonh/project/src/CountTestPy.lf"
    reaction_t _lf__reaction_0;
    #line 25 "file:/home/plutonh/project/src/CountTestPy.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    trigger_t _lf__c;
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    reaction_t* _lf__c_reactions[1];
} test_self_t;
#include "include/ctarget/set.h"
void testreaction_function_0(void* instance_args){
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    test_self_t* self = (test_self_t*)instance_args;
    test_c_t* c = self->_lf_c;
    int c_width = self->_lf_c_width;
    #pragma GCC diagnostic pop
    #line 18 "file:/home/plutonh/project/src/CountTestPy.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function Test.reaction_function_0");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        Py_BuildValue("(O)", convert_C_port_to_py(c, c_width))
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction Test.reaction_function_0 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        Py_FinalizeEx();
        exit(1);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/ctarget/set_undef.h"
#include "include/ctarget/set.h"
void testreaction_function_1(void* instance_args){
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    test_self_t* self = (test_self_t*)instance_args;
    #pragma GCC diagnostic pop
    #line 26 "file:/home/plutonh/project/src/CountTestPy.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function Test.reaction_function_1");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_1, 
        Py_BuildValue("()")
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction Test.reaction_function_1 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        Py_FinalizeEx();
        exit(1);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/ctarget/set_undef.h"
test_self_t* new_Test() {
    test_self_t* self = (test_self_t*)_lf_new_reactor(sizeof(test_self_t));
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    // Set input by default to an always absent default input.
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf_c = &self->_lf_default__c;
    #line 17 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.number = 0;
    #line 17 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.function = testreaction_function_0;
    #line 17 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.self = self;
    #line 17 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 17 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 17 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.name = "?";
    #line 17 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 25 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_1.number = 1;
    #line 25 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_1.function = testreaction_function_1;
    #line 25 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_1.self = self;
    #line 25 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 25 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 25 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_1.name = "?";
    #line 25 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__reaction_1.mode = NULL;
    self->_lf__shutdown_reactions[0] = &self->_lf__reaction_1;
    self->_lf__shutdown.last = NULL;
    self->_lf__shutdown.reactions = &self->_lf__shutdown_reactions[0];
    self->_lf__shutdown.number_of_reactions = 1;
    self->_lf__shutdown.is_timer = false;
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__c.last = NULL;
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__c_reactions[0] = &self->_lf__reaction_0;
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__c.reactions = &self->_lf__c_reactions[0];
    #line 14 "file:/home/plutonh/project/src/CountTestPy.lf"
    self->_lf__c.number_of_reactions = 1;
    self->_lf__c.element_size = sizeof(PyObject);
    return self;
}
// =============== END reactor class Test
// =============== START reactor class CountTestPy
typedef struct {
    struct self_base_t base;
    char *_lf_name;
} counttestpy_self_t;
counttestpy_self_t* new_CountTestPy() {
    counttestpy_self_t* self = (counttestpy_self_t*)_lf_new_reactor(sizeof(counttestpy_self_t));
    return self;
}
// =============== END reactor class CountTestPy
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
    counttestpy_self_t* counttestpy_self[1];
    count_self_t* counttestpy_count_self[1];
    test_self_t* counttestpy_test_self[1];
    // ***** Start initializing CountTestPy of class CountTestPy
    counttestpy_self[0] = new_CountTestPy();
    counttestpy_self[0]->_lf_name = "counttestpy_lf";
    {
        // ***** Start initializing CountTestPy.count of class Count
        counttestpy_count_self[0] = new_Count();
        counttestpy_count_self[0]->_lf_name = "counttestpy_count_lf";
        counttestpy_count_self[0]->_lf_py_reaction_function_0 = 
        get_python_function("__main__", 
            counttestpy_count_self[0]->_lf_name,
            0,
            "reaction_function_0");
        if(counttestpy_count_self[0]->_lf_py_reaction_function_0 == NULL) {
            lf_print_error_and_exit("Could not load function reaction_function_0");
        }
        // width of -2 indicates that it is not a multiport.
        counttestpy_count_self[0]->_lf_out_width = -2;
        // Initializing timer CountTestPy.count.t.
        counttestpy_count_self[0]->_lf__t.offset = 0;
        counttestpy_count_self[0]->_lf__t.period = SEC(1);
        _lf_timer_triggers[_lf_timer_triggers_count++] = &counttestpy_count_self[0]->_lf__t;
        counttestpy_count_self[0]->_lf__t.mode = NULL;
        counttestpy_count_self[0]->_lf__reaction_0.deadline = NEVER;
        //***** End initializing CountTestPy.count
    }
    {
        // ***** Start initializing CountTestPy.test of class Test
        counttestpy_test_self[0] = new_Test();
        counttestpy_test_self[0]->_lf_name = "counttestpy_test_lf";
        counttestpy_test_self[0]->_lf_py_reaction_function_0 = 
        get_python_function("__main__", 
            counttestpy_test_self[0]->_lf_name,
            0,
            "reaction_function_0");
        if(counttestpy_test_self[0]->_lf_py_reaction_function_0 == NULL) {
            lf_print_error_and_exit("Could not load function reaction_function_0");
        }
        counttestpy_test_self[0]->_lf_py_reaction_function_1 = 
        get_python_function("__main__", 
            counttestpy_test_self[0]->_lf_name,
            0,
            "reaction_function_1");
        if(counttestpy_test_self[0]->_lf_py_reaction_function_1 == NULL) {
            lf_print_error_and_exit("Could not load function reaction_function_1");
        }
        // width of -2 indicates that it is not a multiport.
        counttestpy_test_self[0]->_lf_c_width = -2;
        _lf_shutdown_reactions[_lf_shutdown_reactions_count++] = &counttestpy_test_self[0]->_lf__reaction_1;
        counttestpy_test_self[0]->_lf__reaction_0.deadline = NEVER;
        counttestpy_test_self[0]->_lf__reaction_1.deadline = NEVER;
        //***** End initializing CountTestPy.test
    }
    //***** End initializing CountTestPy
    // **** Start deferred initialize for CountTestPy
    {
        // **** Start deferred initialize for CountTestPy.count
        {
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of CountTestPy.count.
            counttestpy_count_self[0]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            counttestpy_count_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &counttestpy_count_self[0]->base.allocations);
            counttestpy_count_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &counttestpy_count_self[0]->base.allocations);
            counttestpy_count_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &counttestpy_count_self[0]->base.allocations);
            {
                int count = 0;
                {
                    counttestpy_count_self[0]->_lf__reaction_0.output_produced[count++] = &counttestpy_count_self[0]->_lf_out.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of CountTestPy.count
        }
        // **** End of deferred initialize for CountTestPy.count
        // **** Start deferred initialize for CountTestPy.test
        {
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of CountTestPy.test.
            counttestpy_test_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0;
            }
            
            // ** End initialization for reaction 0 of CountTestPy.test
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of CountTestPy.test.
            counttestpy_test_self[0]->_lf__reaction_1.num_outputs = 0;
            {
                int count = 0;
            }
            
            // ** End initialization for reaction 1 of CountTestPy.test
        }
        // **** End of deferred initialize for CountTestPy.test
    }
    // **** End of deferred initialize for CountTestPy
    // **** Start non-nested deferred initialize for CountTestPy
    // **** Start non-nested deferred initialize for CountTestPy.count
    // For reference counting, set num_destinations for port CountTestPy.count.out.
    // Iterate over range CountTestPy.count.out(0,1)->[CountTestPy.test.c(0,1)].
    {
        int src_runtime = 0; // Runtime index.
        int src_channel = 0; // Channel index.
        int src_bank = 0; // Bank index.
        int range_count = 0;
        counttestpy_count_self[src_runtime]->_lf_out.num_destinations = 1;
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range CountTestPy.count.out(0,1)->[CountTestPy.test.c(0,1)].
        {
            int src_runtime = 0; // Runtime index.
            int src_channel = 0; // Channel index.
            int src_bank = 0; // Bank index.
            int range_count = 0;
            // Reaction 0 of CountTestPy.count triggers 1 downstream reactions
            // through port CountTestPy.count.out.
            counttestpy_count_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 0 of CountTestPy.count, allocate an
            // array of trigger pointers for downstream reactions through port CountTestPy.count.out
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &counttestpy_count_self[src_runtime]->base.allocations); 
            counttestpy_count_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges CountTestPy.count.out(0,1)->[CountTestPy.test.c(0,1)] and CountTestPy.test.c(0,1).
        {
            int src_runtime = 0; // Runtime index.
            int src_channel = 0; // Channel index.
            int src_bank = 0; // Bank index.
            // Iterate over range CountTestPy.test.c(0,1).
            {
                int dst_runtime = 0; // Runtime index.
                int dst_channel = 0; // Channel index.
                int dst_bank = 0; // Bank index.
                int range_count = 0;
                // Point to destination port CountTestPy.test.c's trigger struct.
                counttestpy_count_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &counttestpy_test_self[dst_runtime]->_lf__c;
            }
        }
    }
    // **** End of non-nested deferred initialize for CountTestPy.count
    // **** Start non-nested deferred initialize for CountTestPy.test
    // **** End of non-nested deferred initialize for CountTestPy.test
    // **** End of non-nested deferred initialize for CountTestPy
    // Connect inputs and outputs for reactor CountTestPy.
    // Connect inputs and outputs for reactor CountTestPy.count.
    // Connect CountTestPy.count.out(0,1)->[CountTestPy.test.c(0,1)] to port CountTestPy.test.c(0,1)
    // Iterate over ranges CountTestPy.count.out(0,1)->[CountTestPy.test.c(0,1)] and CountTestPy.test.c(0,1).
    {
        int src_runtime = 0; // Runtime index.
        int src_channel = 0; // Channel index.
        int src_bank = 0; // Bank index.
        // Iterate over range CountTestPy.test.c(0,1).
        {
            int dst_runtime = 0; // Runtime index.
            int dst_channel = 0; // Channel index.
            int dst_bank = 0; // Bank index.
            int range_count = 0;
            counttestpy_test_self[dst_runtime]->_lf_c = (test_c_t*)&counttestpy_count_self[src_runtime]->_lf_out;
        }
    }
    // Connect inputs and outputs for reactor CountTestPy.test.
    {
    }
    {
    }
    {
        int count = 0;
        {
            // Add port CountTestPy.count.out to array of is_present fields.
            _lf_is_present_fields[0 + count] = &counttestpy_count_self[0]->_lf_out.is_present;
            count++;
        }
    }
    // Set reaction priorities for ReactorInstance CountTestPy
    {
        // Set reaction priorities for ReactorInstance CountTestPy.count
        {
            counttestpy_count_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 140737488355327 shifted left 16 bits.
            counttestpy_count_self[0]->_lf__reaction_0.index = 0x7fffffffffff0000LL;
        }
        // Set reaction priorities for ReactorInstance CountTestPy.test
        {
            counttestpy_test_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 1 and 
            // deadline 140737488355327 shifted left 16 bits.
            counttestpy_test_self[0]->_lf__reaction_0.index = 0x7fffffffffff0001LL;
            counttestpy_test_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 2 and 
            // deadline 140737488355327 shifted left 16 bits.
            counttestpy_test_self[0]->_lf__reaction_1.index = 0x7fffffffffff0002LL;
        }
    }
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
