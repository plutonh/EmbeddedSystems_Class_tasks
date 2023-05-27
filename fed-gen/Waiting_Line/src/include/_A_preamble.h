#include "core/federated/federate.h"
#include "core/federated/net_common.h"
#include "core/federated/net_util.h"
#include "core/threaded/reactor_threaded.h"
#include "core/utils/util.h"
extern federate_instance_t _fed;
lf_action_base_t* _lf_action_table[3];
size_t _lf_action_table_size = 3;
void _lf_executable_preamble() {
    // ***** Start initializing the federated execution. */
    // Initialize the socket mutex
    lf_mutex_init(&outbound_socket_mutex);
    lf_cond_init(&port_status_changed, &mutex);
    _fed.has_upstream  = true;
    _fed.has_downstream = true;
    _lf_my_fed_id = 0;
    _fed.number_of_inbound_p2p_connections = 0;
    _fed.number_of_outbound_p2p_connections = 0;
    // Connect to the RTI. This sets _fed.socket_TCP_RTI and _lf_rti_socket_UDP.
    connect_to_rti("localhost", 0);
    // Initialize the array of pointers to network input port triggers
    _fed.triggers_for_network_input_control_reactions_size = 3;
    _fed.triggers_for_network_input_control_reactions = (trigger_t**)malloc(
        _fed.triggers_for_network_input_control_reactions_size * sizeof(trigger_t*));
}
#define initialize_triggers_for_federate() \
do { \
    _lf_action_table[0] = (lf_action_base_t*)&a_main_self[0]->_lf_networkMessage_1; \
    _lf_action_table[1] = (lf_action_base_t*)&a_main_self[0]->_lf_networkMessage_2; \
    _lf_action_table[2] = (lf_action_base_t*)&a_main_self[0]->_lf_networkMessage_3; \
    /* Add trigger a_main_self[0]->_lf__inputControlReactionTrigger_1 to the global list of network input ports. */ \
    _fed.triggers_for_network_input_control_reactions[0]= \
        &a_main_self[0]->_lf__inputControlReactionTrigger_1; \
    /* Add trigger a_main_self[0]->_lf__inputControlReactionTrigger_2 to the global list of network input ports. */ \
    _fed.triggers_for_network_input_control_reactions[1]= \
        &a_main_self[0]->_lf__inputControlReactionTrigger_2; \
    /* Add trigger a_main_self[0]->_lf__inputControlReactionTrigger_3 to the global list of network input ports. */ \
    _fed.triggers_for_network_input_control_reactions[2]= \
        &a_main_self[0]->_lf__inputControlReactionTrigger_3; \
    _fed.trigger_for_network_output_control_reactions=&a_main_self[0]->_lf__outputControlReactionTrigger; \
} \
while (0)
/**
* Generated function that sends information about connections between this federate and
* other federates where messages are routed through the RTI. Currently, this
* only includes logical connections when the coordination is centralized. This
* information is needed for the RTI to perform the centralized coordination.
* @see MSG_TYPE_NEIGHBOR_STRUCTURE in net_common.h
*/
void send_neighbor_structure_to_RTI(int rti_socket) {
    interval_t candidate_tmp;
    size_t buffer_size = 1 + 8 + 
                    3 * ( sizeof(uint16_t) + sizeof(int64_t) ) +
                    2 * sizeof(uint16_t);
    unsigned char buffer_to_send[buffer_size];
    
    size_t message_head = 0;
    buffer_to_send[message_head] = MSG_TYPE_NEIGHBOR_STRUCTURE;
    message_head++;
    encode_int32((int32_t)3, &(buffer_to_send[message_head]));
    message_head+=sizeof(int32_t);
    encode_int32((int32_t)2, &(buffer_to_send[message_head]));
    message_head+=sizeof(int32_t);
    encode_uint16((uint16_t)1, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    candidate_tmp = FOREVER;
    candidate_tmp = NEVER;
    encode_int64((int64_t)candidate_tmp, &(buffer_to_send[message_head]));
    message_head += sizeof(int64_t);
    encode_uint16((uint16_t)2, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    candidate_tmp = FOREVER;
    candidate_tmp = NEVER;
    encode_int64((int64_t)candidate_tmp, &(buffer_to_send[message_head]));
    message_head += sizeof(int64_t);
    encode_uint16((uint16_t)3, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    candidate_tmp = FOREVER;
    candidate_tmp = NEVER;
    encode_int64((int64_t)candidate_tmp, &(buffer_to_send[message_head]));
    message_head += sizeof(int64_t);
    encode_uint16(3, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    encode_uint16(4, &(buffer_to_send[message_head]));
    message_head += sizeof(uint16_t);
    write_to_socket_errexit(
        rti_socket, 
        buffer_size,
        buffer_to_send,
        "Failed to send the neighbor structure message to the RTI."
    );
}