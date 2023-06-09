// Code generated by the Lingua Franca compiler from:
// file://home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V"
#include "include/api/api.h"
#include "core/reactor.h"
#include "core/reactor_common.h"
#include "core/threaded/scheduler.h"
#include "core/mixed_radix.h"
#include "core/port.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "core/federated/federate.h"
#include "core/federated/net_common.h"
#include "include/_V_preamble.h"
#include <stdio.h>
struct {
    void* open;
    void* close;
    void* ready;
    void* not;
} buttons;

void* read_input_1(void* arg) { // keyboard input funciton for Cockpit reactor
    printf("***************************************************************\n");
    printf("Press 'o' and hit return or enter to open the door\n");
    printf("Press 'c' and hit return or enter to close the door\n");
    printf("Press 'Control-d' to exit\n");
    while(1) {
        int c = getchar();
        if (c == 'o') {
            lf_schedule(buttons.open, 0);
        }
        if (c == 'c') {
            lf_schedule(buttons.close, 0);
        }
        if (c == EOF) {
            break;
        }
    }
    lf_request_stop();
    return NULL;
}

void* read_input_2(void* arg) { // keyboard input funciton for VisionMonitor reactor
    printf("***************************************************************\n");
    printf("Press 'r' and hit return or enter to open the ramp\n");
    printf("Press 'n' and hit return or enter to close the ramp\n");
    printf("Press 'Control-d' to exit\n");
    while(1) {
        int c = getchar();
        if (c == 'r') {
            lf_schedule(buttons.ready, 0);
        }
        if (c == 'n') {
            lf_schedule(buttons.not, 0);
        }
        if (c == EOF) {
            break;
        }
    }
    lf_request_stop();
    return NULL;
}
int main(int argc, const char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
const char* _lf_default_argv[] = { "dummy", "-k", "true" };
void _lf_set_default_command_line_options() {
        default_argc = 3;
        default_argv = _lf_default_argv;
}
// =============== START reactor class VisionMonitor
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_sparse_io_record_t* sparse_record;
    int destination_channel;
    int num_destinations;
    bool value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} visionmonitor_ramp_t;
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
} visionmonitor_open_check_t;
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
} visionmonitor_close_check_t;
typedef struct {
    struct self_base_t base;
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    visionmonitor_open_check_t _lf_open_check;
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    visionmonitor_close_check_t _lf_close_check;
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    visionmonitor_ramp_t _lf_ramp;
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    int _lf_ramp_width;
    #line 75 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    reaction_t _lf__reaction_0;
    #line 86 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    reaction_t _lf__reaction_1;
    #line 94 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    reaction_t _lf__reaction_2;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    trigger_t _lf__open_check;
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    reaction_t* _lf__open_check_reactions[1];
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    trigger_t _lf__close_check;
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    reaction_t* _lf__close_check_reactions[1];
} visionmonitor_self_t;
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void visionmonitorreaction_function_0(void* instance_args) {
    visionmonitor_self_t* self = (visionmonitor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    visionmonitor_open_check_t* open_check = &self->_lf_open_check;
    visionmonitor_close_check_t* close_check = &self->_lf_close_check;
    #line 77 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    // Activaing 'read_input' function for receiving input character.
    lf_thread_t thread_id_2;
    lf_thread_create(&thread_id_2, &read_input_2, NULL);
    buttons.ready = open_check; // Causes an action for the 'r' character.
    buttons.not = close_check;  // Causes an action for the 'n' character.
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void visionmonitorreaction_function_1(void* instance_args) {
    visionmonitor_self_t* self = (visionmonitor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    // Expose the action struct as a local variable whose name matches the action name.
    visionmonitor_open_check_t* open_check = &self->_lf_open_check;
    // Set the fields of the action struct to match the current trigger.
    open_check->is_present = (bool)self->_lf__open_check.status;
    open_check->has_value = ((self->_lf__open_check.tmplt.token) != NULL && (self->_lf__open_check.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)open_check, (self->_lf__open_check.tmplt.token));
    visionmonitor_ramp_t* ramp = &self->_lf_ramp;
    #line 88 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    lf_set(ramp, true);
    // printf("%ld", lf_time_logical_elapsed());
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void visionmonitorreaction_function_2(void* instance_args) {
    visionmonitor_self_t* self = (visionmonitor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    // Expose the action struct as a local variable whose name matches the action name.
    visionmonitor_close_check_t* close_check = &self->_lf_close_check;
    // Set the fields of the action struct to match the current trigger.
    close_check->is_present = (bool)self->_lf__close_check.status;
    close_check->has_value = ((self->_lf__close_check.tmplt.token) != NULL && (self->_lf__close_check.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)close_check, (self->_lf__close_check.tmplt.token));
    visionmonitor_ramp_t* ramp = &self->_lf_ramp;
    #line 96 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    lf_set(ramp, false);
    // printf("%ld", lf_time_logical_elapsed());
}
#include "include/api/set_undef.h"
visionmonitor_self_t* new_VisionMonitor() {
    visionmonitor_self_t* self = (visionmonitor_self_t*)_lf_new_reactor(sizeof(visionmonitor_self_t));
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf_open_check.trigger = &self->_lf__open_check;
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf_close_check.trigger = &self->_lf__close_check;
    #line 75 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.number = 0;
    #line 75 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.function = visionmonitorreaction_function_0;
    #line 75 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.self = self;
    #line 75 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 75 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 75 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.name = "?";
    #line 75 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 86 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_1.number = 1;
    #line 86 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_1.function = visionmonitorreaction_function_1;
    #line 86 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_1.self = self;
    #line 86 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 86 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 86 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_1.name = "?";
    #line 86 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 94 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_2.number = 2;
    #line 94 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_2.function = visionmonitorreaction_function_2;
    #line 94 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_2.self = self;
    #line 94 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 94 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 94 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_2.name = "?";
    #line 94 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_2.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__open_check.last = NULL;
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__open_check.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__open_check_reactions[0] = &self->_lf__reaction_1;
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__open_check.reactions = &self->_lf__open_check_reactions[0];
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__open_check.number_of_reactions = 1;
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #ifdef FEDERATED
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__open_check.physical_time_of_arrival = NEVER;
    #line 71 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #endif // FEDERATED
    self->_lf__open_check.is_physical = true;
    
    self->_lf__open_check.tmplt.type.element_size = 0;
    self->_lf_open_check.type.element_size = 0;
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__close_check.last = NULL;
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__close_check.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__close_check_reactions[0] = &self->_lf__reaction_2;
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__close_check.reactions = &self->_lf__close_check_reactions[0];
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__close_check.number_of_reactions = 1;
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #ifdef FEDERATED
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__close_check.physical_time_of_arrival = NEVER;
    #line 73 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #endif // FEDERATED
    self->_lf__close_check.is_physical = true;
    
    self->_lf__close_check.tmplt.type.element_size = 0;
    self->_lf_close_check.type.element_size = 0;
    return self;
}
// =============== END reactor class VisionMonitor
// =============== START reactor class V
typedef struct {
    struct self_base_t base;
    struct {
        #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
        visionmonitor_ramp_t* ramp;
        #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
        trigger_t ramp_trigger;
        #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
        reaction_t* ramp_reactions[1];
    } _lf_V;
    int _lf_V_width;
    #line 108 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    reaction_t _lf__reaction_0;
} v_main_self_t;
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void v_mainreaction_function_0(void* instance_args) {
    v_main_self_t* self = (v_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct V {
        visionmonitor_ramp_t* ramp;
    
    } V;
    V.ramp = self->_lf_V.ramp;
    #line 110 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    // **** This reaction is unordered.
    // Sending from V.ramp in federate V to D.disarm in federate D
    if (!V.ramp->is_present) return;
    size_t message_length = sizeof(bool);
    send_message(MSG_TYPE_P2P_MESSAGE, 1, 2, "federate 2", message_length, (unsigned char*)&V.ramp->value);
}
#include "include/api/set_undef.h"
v_main_self_t* new_V() {
    v_main_self_t* self = (v_main_self_t*)_lf_new_reactor(sizeof(v_main_self_t));
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_V_width = -2;
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf_V.ramp_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf_V.ramp_reactions[0] = &self->_lf__reaction_0;
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf_V.ramp_trigger.reactions = self->_lf_V.ramp_reactions;
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf_V.ramp_trigger.last = NULL;
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf_V.ramp_trigger.number_of_reactions = 1;
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #ifdef FEDERATED
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf_V.ramp_trigger.physical_time_of_arrival = NEVER;
    #line 69 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    #endif // FEDERATED
    #line 108 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.number = 0;
    #line 108 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.function = v_mainreaction_function_0;
    #line 108 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.self = self;
    #line 108 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 108 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 108 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.name = "?";
    #line 108 "/home/plutonh/project/fed-gen/Federated_Airplane/src/V.lf"
    self->_lf__reaction_0.mode = NULL;
    return self;
}
// =============== END reactor class V
// Array of pointers to timer triggers to be scheduled in _lf_initialize_timers().
trigger_t** _lf_timer_triggers = NULL;
int _lf_timer_triggers_size = 0;
// Array of pointers to startup triggers.
reaction_t* _lf_startup_reactions[1];
int _lf_startup_reactions_size = 1;
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
    _lf_is_present_fields_size = 3;
    _lf_is_present_fields = (bool**)calloc(3, sizeof(bool*));
    if (_lf_is_present_fields == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated = (bool**)calloc(3, sizeof(bool*));
    if (_lf_is_present_fields_abbreviated == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated_size = 0;
    #ifdef FEDERATED_DECENTRALIZED
    // Create the array that will contain pointers to intended_tag fields to reset on each step.
    _lf_intended_tag_fields_size = 3;
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
    v_main_self_t* v_main_self[1];
    SUPPRESS_UNUSED_WARNING(v_main_self);
    visionmonitor_self_t* v_v_self[1];
    SUPPRESS_UNUSED_WARNING(v_v_self);
    // ***** Start initializing V of class V
    v_main_self[0] = new_V();
    bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
    v_main_self[0]->_lf__reaction_0.deadline = NEVER;
    {
        // ***** Start initializing V.V of class VisionMonitor
        v_v_self[0] = new_VisionMonitor();
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        // width of -2 indicates that it is not a multiport.
        v_v_self[0]->_lf_ramp_width = -2;
        _lf_startup_reactions[_lf_startup_reactions_count++] = &v_v_self[0]->_lf__reaction_0;
        // Initializing action V.V.open_check
        v_v_self[0]->_lf__open_check.offset = 0;
        v_v_self[0]->_lf__open_check.period = -1;
        v_v_self[0]->_lf__open_check.mode = NULL;
        // Initializing action V.V.close_check
        v_v_self[0]->_lf__close_check.offset = 0;
        v_v_self[0]->_lf__close_check.period = -1;
        v_v_self[0]->_lf__close_check.mode = NULL;
        _lf_initialize_template((token_template_t*)
                &(v_v_self[0]->_lf__open_check),
        0);
        v_v_self[0]->_lf__open_check.status = absent;
        _lf_initialize_template((token_template_t*)
                &(v_v_self[0]->_lf__close_check),
        0);
        v_v_self[0]->_lf__close_check.status = absent;
        v_v_self[0]->_lf__reaction_0.deadline = NEVER;
        v_v_self[0]->_lf__reaction_1.deadline = NEVER;
        v_v_self[0]->_lf__reaction_2.deadline = NEVER;
        //***** End initializing V.V
    }
    //***** End initializing V
    // **** Start deferred initialize for V
    {
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_0 of V.
        v_main_self[0]->_lf__reaction_0.num_outputs = 0;
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
        }
        
        // ** End initialization for reaction 0 of V
        // **** Start deferred initialize for V.V
        {
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of V.V.
            v_v_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
            }
            
            // ** End initialization for reaction 0 of V.V
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of V.V.
            v_v_self[0]->_lf__reaction_1.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            v_v_self[0]->_lf__reaction_1.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &v_v_self[0]->base.allocations);
            v_v_self[0]->_lf__reaction_1.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &v_v_self[0]->base.allocations);
            v_v_self[0]->_lf__reaction_1.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &v_v_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    v_v_self[0]->_lf__reaction_1.output_produced[count++] = &v_v_self[0]->_lf_ramp.is_present;
                }
            }
            
            // ** End initialization for reaction 1 of V.V
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_2 of V.V.
            v_v_self[0]->_lf__reaction_2.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            v_v_self[0]->_lf__reaction_2.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &v_v_self[0]->base.allocations);
            v_v_self[0]->_lf__reaction_2.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &v_v_self[0]->base.allocations);
            v_v_self[0]->_lf__reaction_2.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &v_v_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    v_v_self[0]->_lf__reaction_2.output_produced[count++] = &v_v_self[0]->_lf_ramp.is_present;
                }
            }
            
            // ** End initialization for reaction 2 of V.V
        }
        // **** End of deferred initialize for V.V
    }
    // **** End of deferred initialize for V
    // **** Start non-nested deferred initialize for V
    // **** Start non-nested deferred initialize for V.V
    // For reference counting, set num_destinations for port V.V.ramp.
    // Iterate over range V.V.ramp(0,1)->[V.V.ramp(0,1)].
    {
        int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
        int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
        int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
        v_v_self[src_runtime]->_lf_ramp.num_destinations = 1;
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range V.V.ramp(0,1)->[V.V.ramp(0,1)].
        {
            int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
            int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
            int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            // Reaction 1 of V.V triggers 1 downstream reactions
            // through port V.V.ramp.
            v_v_self[src_runtime]->_lf__reaction_1.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 1 of V.V, allocate an
            // array of trigger pointers for downstream reactions through port V.V.ramp
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &v_v_self[src_runtime]->base.allocations); 
            v_v_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges V.V.ramp(0,1)->[V.V.ramp(0,1)] and V.V.ramp(0,1).
        {
            int src_runtime = 0; // Runtime index.
            SUPPRESS_UNUSED_WARNING(src_runtime);
            int src_channel = 0; // Channel index.
            SUPPRESS_UNUSED_WARNING(src_channel);
            int src_bank = 0; // Bank index.
            SUPPRESS_UNUSED_WARNING(src_bank);
            // Iterate over range V.V.ramp(0,1).
            {
                int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                // Port V.V.ramp has reactions in its parent's parent.
                // Point to the trigger struct for those reactions.
                v_v_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime] + src_channel][0] = &v_main_self[dst_runtime]->_lf_V.ramp_trigger;
            }
        }
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range V.V.ramp(0,1)->[V.V.ramp(0,1)].
        {
            int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
            int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
            int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            // Reaction 2 of V.V triggers 1 downstream reactions
            // through port V.V.ramp.
            v_v_self[src_runtime]->_lf__reaction_2.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 2 of V.V, allocate an
            // array of trigger pointers for downstream reactions through port V.V.ramp
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &v_v_self[src_runtime]->base.allocations); 
            v_v_self[src_runtime]->_lf__reaction_2.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges V.V.ramp(0,1)->[V.V.ramp(0,1)] and V.V.ramp(0,1).
        {
            int src_runtime = 0; // Runtime index.
            SUPPRESS_UNUSED_WARNING(src_runtime);
            int src_channel = 0; // Channel index.
            SUPPRESS_UNUSED_WARNING(src_channel);
            int src_bank = 0; // Bank index.
            SUPPRESS_UNUSED_WARNING(src_bank);
            // Iterate over range V.V.ramp(0,1).
            {
                int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                // Port V.V.ramp has reactions in its parent's parent.
                // Point to the trigger struct for those reactions.
                v_v_self[src_runtime]->_lf__reaction_2.triggers[triggers_index[src_runtime] + src_channel][0] = &v_main_self[dst_runtime]->_lf_V.ramp_trigger;
            }
        }
    }
    // **** End of non-nested deferred initialize for V.V
    // **** End of non-nested deferred initialize for V
    // Connect inputs and outputs for reactor V.
    // Connect inputs and outputs for reactor V.V.
    // Connect V.V.ramp(0,1)->[V.V.ramp(0,1)] to port V.V.ramp(0,1)
    // Iterate over ranges V.V.ramp(0,1)->[V.V.ramp(0,1)] and V.V.ramp(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range V.V.ramp(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            v_main_self[dst_runtime]->_lf_V.ramp = (visionmonitor_ramp_t*)&v_v_self[src_runtime]->_lf_ramp;
        }
    }
    {
        {
            // Add action V.V.open_check to array of is_present fields.
            _lf_is_present_fields[0] 
                    = &v_v_self[0]->_lf_open_check.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add action V.V.open_check to array of intended_tag fields.
            _lf_intended_tag_fields[0] 
                    = &v_v_self[0]->_lf_open_check.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
        }
        {
            // Add action V.V.close_check to array of is_present fields.
            _lf_is_present_fields[1] 
                    = &v_v_self[0]->_lf_close_check.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add action V.V.close_check to array of intended_tag fields.
            _lf_intended_tag_fields[1] 
                    = &v_v_self[0]->_lf_close_check.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
        }
    }
    {
        int count = 0; SUPPRESS_UNUSED_WARNING(count);
        {
            // Add port V.V.ramp to array of is_present fields.
            _lf_is_present_fields[2 + count] = &v_v_self[0]->_lf_ramp.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port V.V.ramp to array of intended_tag fields.
            _lf_intended_tag_fields[2 + count] = &v_v_self[0]->_lf_ramp.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
        }
    }
    // Set reaction priorities for ReactorInstance V
    {
        v_main_self[0]->_lf__reaction_0.chain_id = 1;
        // index is the OR of level 3 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        v_main_self[0]->_lf__reaction_0.index = 0xffffffffffff0003LL;
        // Set reaction priorities for ReactorInstance V.V
        {
            v_v_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            v_v_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
            v_v_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 1 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            v_v_self[0]->_lf__reaction_1.index = 0xffffffffffff0001LL;
            v_v_self[0]->_lf__reaction_2.chain_id = 1;
            // index is the OR of level 2 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            v_v_self[0]->_lf__reaction_2.index = 0xffffffffffff0002LL;
        }
    }
    // Initialize the scheduler
    size_t num_reactions_per_level[4] = 
        {1, 1, 1, 1};
    sched_params_t sched_params = (sched_params_t) {
                            .num_reactions_per_level = &num_reactions_per_level[0],
                            .num_reactions_per_level_size = (size_t) 4};
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
void _lf_trigger_startup_reactions() {
    for (int i = 0; i < _lf_startup_reactions_size; i++) {
        if (_lf_startup_reactions[i] != NULL) {
            _lf_trigger_reaction(_lf_startup_reactions[i], -1);
        }
    }
}
void _lf_initialize_timers() {

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
