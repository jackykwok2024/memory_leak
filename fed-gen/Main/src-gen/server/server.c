#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "include/core/federated/federate.h"
#include "include/core/federated/net_common.h"
#include "pythontarget.h"
// Code generated by the Lingua Franca compiler from:
// file://mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src/server.lf
#define LOG_LEVEL 4
#define TARGET_FILES_DIRECTORY "/mnt/c/Users/jacky/Desktop/Memory_Leak/fed-gen/Main/src-gen/server"
int main(int argc, const char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
const char* _lf_default_argv[] = { "dummy", "-k", "true", "-o", "10", "sec" };
void _lf_set_default_command_line_options() {
        default_argc = 6;
        default_argv = _lf_default_argv;
}
#include "serverreactor1387187301.h"
#include "server2107671597_main.h"
#include "include/_server_preamble.h"
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
    _lf_is_present_fields_size = 4;
    _lf_is_present_fields = (bool**)calloc(4, sizeof(bool*));
    if (_lf_is_present_fields == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated = (bool**)calloc(4, sizeof(bool*));
    if (_lf_is_present_fields_abbreviated == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated_size = 0;
    #ifdef FEDERATED_DECENTRALIZED
    // Create the array that will contain pointers to intended_tag fields to reset on each step.
    _lf_intended_tag_fields_size = 4;
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
    _server2107671597_main_main_self_t* server_main_self[1];
    SUPPRESS_UNUSED_WARNING(server_main_self);
    _serverreactor1387187301_self_t* server_server_self[1];
    SUPPRESS_UNUSED_WARNING(server_server_self);
    // ***** Start initializing server of class server
    server_main_self[0] = new_server2107671597_main();
    server_main_self[0]->_lf_name = "server_main_lf";
    // Initializing action server.inputControlReactionTrigger
    server_main_self[0]->_lf__inputControlReactionTrigger.offset = 0;
    server_main_self[0]->_lf__inputControlReactionTrigger.period = -1;
    server_main_self[0]->_lf__inputControlReactionTrigger.mode = NULL;
    // Initializing action server.networkMessage
    server_main_self[0]->_lf__networkMessage.offset = 0;
    server_main_self[0]->_lf__networkMessage.period = -1;
    server_main_self[0]->_lf__networkMessage.mode = NULL;
    _lf_initialize_template((token_template_t*)
            &(server_main_self[0]->_lf__inputControlReactionTrigger),
    0);
    server_main_self[0]->_lf__inputControlReactionTrigger.status = absent;
    _lf_initialize_template((token_template_t*)
            &(server_main_self[0]->_lf__networkMessage),
    0);
    server_main_self[0]->_lf__networkMessage.status = absent;
    server_main_self[0]->_lf__reaction_0.deadline = NEVER;
    server_main_self[0]->_lf__reaction_1.deadline = NEVER;
    server_main_self[0]->_lf__reaction_2.deadline = NEVER;
    {
        // ***** Start initializing server.server of class ServerReactor
        server_server_self[0] = new_serverreactor1387187301();
        server_server_self[0]->_lf_name = "server_server_lf";
        server_server_self[0]->_lf_py_reaction_function_0 = 
        get_python_function("__main__", 
            server_server_self[0]->_lf_name,
            0,
            "reaction_function_0");
        if(server_server_self[0]->_lf_py_reaction_function_0 == NULL) {
            lf_print_error_and_exit("Could not load function reaction_function_0");
        }
        server_server_self[0]->_lf_py_reaction_function_1 = 
        get_python_function("__main__", 
            server_server_self[0]->_lf_name,
            0,
            "reaction_function_1");
        if(server_server_self[0]->_lf_py_reaction_function_1 == NULL) {
            lf_print_error_and_exit("Could not load function reaction_function_1");
        }
        // width of -2 indicates that it is not a multiport.
        server_server_self[0]->_lf_out_parameter_width = -2;
        // width of -2 indicates that it is not a multiport.
        server_server_self[0]->_lf_in_parameter_width = -2;
        _lf_startup_reactions[_lf_startup_reactions_count++] = &server_server_self[0]->_lf__reaction_0;
        server_server_self[0]->_lf__reaction_0.deadline = NEVER;
        server_server_self[0]->_lf__reaction_1.deadline = NEVER;
        //***** End initializing server.server
    }
    //***** End initializing server
    // **** Start deferred initialize for server
    {
        server_main_self[0]->_lf__reaction_0.name = "server reaction 0";
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_0 of server.
        server_main_self[0]->_lf__reaction_0.num_outputs = 1;
        // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
        // struct for this reaction.
        server_main_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                1, sizeof(trigger_t**),
                &server_main_self[0]->base.allocations);
        server_main_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                1, sizeof(int),
                &server_main_self[0]->base.allocations);
        server_main_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                1, sizeof(bool*),
                &server_main_self[0]->base.allocations);
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
            // Reaction writes to an input of a contained reactor.
            {
                server_main_self[0]->_lf__reaction_0.output_produced[count++] = &server_main_self[0]->_lf_server.in_parameter.is_present;
            }
        }
        
        // ** End initialization for reaction 0 of server
        server_main_self[0]->_lf__reaction_1.name = "server reaction 1";
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_1 of server.
        server_main_self[0]->_lf__reaction_1.num_outputs = 1;
        // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
        // struct for this reaction.
        server_main_self[0]->_lf__reaction_1.triggers = (trigger_t***)_lf_allocate(
                1, sizeof(trigger_t**),
                &server_main_self[0]->base.allocations);
        server_main_self[0]->_lf__reaction_1.triggered_sizes = (int*)_lf_allocate(
                1, sizeof(int),
                &server_main_self[0]->base.allocations);
        server_main_self[0]->_lf__reaction_1.output_produced = (bool**)_lf_allocate(
                1, sizeof(bool*),
                &server_main_self[0]->base.allocations);
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
            // Reaction writes to an input of a contained reactor.
            {
                server_main_self[0]->_lf__reaction_1.output_produced[count++] = &server_main_self[0]->_lf_server.in_parameter.is_present;
            }
        }
        
        // ** End initialization for reaction 1 of server
        server_main_self[0]->_lf__reaction_2.name = "server reaction 2";
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_2 of server.
        server_main_self[0]->_lf__reaction_2.num_outputs = 0;
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
        }
        
        // ** End initialization for reaction 2 of server
        // **** Start deferred initialize for server.server
        {
            server_server_self[0]->_lf__reaction_0.name = "server.server reaction 0";
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of server.server.
            server_server_self[0]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            server_server_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &server_server_self[0]->base.allocations);
            server_server_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &server_server_self[0]->base.allocations);
            server_server_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &server_server_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    server_server_self[0]->_lf__reaction_0.output_produced[count++] = &server_server_self[0]->_lf_out_parameter.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of server.server
            server_server_self[0]->_lf__reaction_1.name = "server.server reaction 1";
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of server.server.
            server_server_self[0]->_lf__reaction_1.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            server_server_self[0]->_lf__reaction_1.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &server_server_self[0]->base.allocations);
            server_server_self[0]->_lf__reaction_1.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &server_server_self[0]->base.allocations);
            server_server_self[0]->_lf__reaction_1.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &server_server_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    server_server_self[0]->_lf__reaction_1.output_produced[count++] = &server_server_self[0]->_lf_out_parameter.is_present;
                }
            }
            
            // ** End initialization for reaction 1 of server.server
        }
        // **** End of deferred initialize for server.server
    }
    // **** End of deferred initialize for server
    // **** Start non-nested deferred initialize for server
    // Set number of destination reactors for port server.in_parameter.
    // Iterate over range server.server.in_parameter(0,1)->[server.server.in_parameter(0,1)].
    {
        int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
        int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
        int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
        server_main_self[src_runtime]->_lf_server.in_parameter.num_destinations = 1;
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range server.server.in_parameter(0,1)->[server.server.in_parameter(0,1)].
        {
            int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
            int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
            int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            // Reaction 0 of server triggers 1 downstream reactions
            // through port server.server.in_parameter.
            server_main_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 0 of server, allocate an
            // array of trigger pointers for downstream reactions through port server.server.in_parameter
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &server_main_self[src_runtime]->base.allocations); 
            server_main_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges server.server.in_parameter(0,1)->[server.server.in_parameter(0,1)] and server.server.in_parameter(0,1).
        {
            int src_runtime = 0; // Runtime index.
            SUPPRESS_UNUSED_WARNING(src_runtime);
            int src_channel = 0; // Channel index.
            SUPPRESS_UNUSED_WARNING(src_channel);
            int src_bank = 0; // Bank index.
            SUPPRESS_UNUSED_WARNING(src_bank);
            // Iterate over range server.server.in_parameter(0,1).
            {
                int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                // Point to destination port server.server.in_parameter's trigger struct.
                server_main_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &server_server_self[dst_runtime]->_lf__in_parameter;
            }
        }
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range server.server.in_parameter(0,1)->[server.server.in_parameter(0,1)].
        {
            int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
            int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
            int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            // Reaction 1 of server triggers 1 downstream reactions
            // through port server.server.in_parameter.
            server_main_self[src_runtime]->_lf__reaction_1.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 1 of server, allocate an
            // array of trigger pointers for downstream reactions through port server.server.in_parameter
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &server_main_self[src_runtime]->base.allocations); 
            server_main_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges server.server.in_parameter(0,1)->[server.server.in_parameter(0,1)] and server.server.in_parameter(0,1).
        {
            int src_runtime = 0; // Runtime index.
            SUPPRESS_UNUSED_WARNING(src_runtime);
            int src_channel = 0; // Channel index.
            SUPPRESS_UNUSED_WARNING(src_channel);
            int src_bank = 0; // Bank index.
            SUPPRESS_UNUSED_WARNING(src_bank);
            // Iterate over range server.server.in_parameter(0,1).
            {
                int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                // Point to destination port server.server.in_parameter's trigger struct.
                server_main_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime] + src_channel][0] = &server_server_self[dst_runtime]->_lf__in_parameter;
            }
        }
    }
    // **** Start non-nested deferred initialize for server.server
    // For reference counting, set num_destinations for port server.server.out_parameter.
    // Iterate over range server.server.out_parameter(0,1)->[server.server.out_parameter(0,1)].
    {
        int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
        int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
        int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
        server_server_self[src_runtime]->_lf_out_parameter.num_destinations = 1;
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range server.server.out_parameter(0,1)->[server.server.out_parameter(0,1)].
        {
            int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
            int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
            int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            // Reaction 0 of server.server triggers 1 downstream reactions
            // through port server.server.out_parameter.
            server_server_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 0 of server.server, allocate an
            // array of trigger pointers for downstream reactions through port server.server.out_parameter
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &server_server_self[src_runtime]->base.allocations); 
            server_server_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges server.server.out_parameter(0,1)->[server.server.out_parameter(0,1)] and server.server.out_parameter(0,1).
        {
            int src_runtime = 0; // Runtime index.
            SUPPRESS_UNUSED_WARNING(src_runtime);
            int src_channel = 0; // Channel index.
            SUPPRESS_UNUSED_WARNING(src_channel);
            int src_bank = 0; // Bank index.
            SUPPRESS_UNUSED_WARNING(src_bank);
            // Iterate over range server.server.out_parameter(0,1).
            {
                int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                // Port server.server.out_parameter has reactions in its parent's parent.
                // Point to the trigger struct for those reactions.
                server_server_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &server_main_self[dst_runtime]->_lf_server.out_parameter_trigger;
            }
        }
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range server.server.out_parameter(0,1)->[server.server.out_parameter(0,1)].
        {
            int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
            int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
            int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            // Reaction 1 of server.server triggers 1 downstream reactions
            // through port server.server.out_parameter.
            server_server_self[src_runtime]->_lf__reaction_1.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 1 of server.server, allocate an
            // array of trigger pointers for downstream reactions through port server.server.out_parameter
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &server_server_self[src_runtime]->base.allocations); 
            server_server_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges server.server.out_parameter(0,1)->[server.server.out_parameter(0,1)] and server.server.out_parameter(0,1).
        {
            int src_runtime = 0; // Runtime index.
            SUPPRESS_UNUSED_WARNING(src_runtime);
            int src_channel = 0; // Channel index.
            SUPPRESS_UNUSED_WARNING(src_channel);
            int src_bank = 0; // Bank index.
            SUPPRESS_UNUSED_WARNING(src_bank);
            // Iterate over range server.server.out_parameter(0,1).
            {
                int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                // Port server.server.out_parameter has reactions in its parent's parent.
                // Point to the trigger struct for those reactions.
                server_server_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime] + src_channel][0] = &server_main_self[dst_runtime]->_lf_server.out_parameter_trigger;
            }
        }
    }
    // **** End of non-nested deferred initialize for server.server
    // **** End of non-nested deferred initialize for server
    // Connect inputs and outputs for reactor server.
    // Connect inputs and outputs for reactor server.server.
    // Connect server.server.in_parameter(0,1)->[server.server.in_parameter(0,1)] to port server.server.in_parameter(0,1)
    // Iterate over ranges server.server.in_parameter(0,1)->[server.server.in_parameter(0,1)] and server.server.in_parameter(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range server.server.in_parameter(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            server_server_self[dst_runtime]->_lf_in_parameter = (serverreactor1387187301_in_parameter_t*)&server_main_self[src_runtime]->_lf_server.in_parameter;
        }
    }
    // Connect server.server.out_parameter(0,1)->[server.server.out_parameter(0,1)] to port server.server.out_parameter(0,1)
    // Iterate over ranges server.server.out_parameter(0,1)->[server.server.out_parameter(0,1)] and server.server.out_parameter(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range server.server.out_parameter(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            server_main_self[dst_runtime]->_lf_server.out_parameter = (serverreactor1387187301_out_parameter_t*)&server_server_self[src_runtime]->_lf_out_parameter;
        }
    }
    {
    }
    // Add port server.server.in_parameter to array of is_present fields.
    {
        int count = 0; SUPPRESS_UNUSED_WARNING(count);
        {
            {
                _lf_is_present_fields[0 + count] = &server_main_self[0]->_lf_server.in_parameter.is_present;
                #ifdef FEDERATED_DECENTRALIZED
                _lf_intended_tag_fields[0 + count] = &server_main_self[0]->_lf_server.in_parameter.intended_tag;
                #endif // FEDERATED_DECENTRALIZED
                count++;
            }
        }
    }
    {
        // Add action server.inputControlReactionTrigger to array of is_present fields.
        _lf_is_present_fields[1] 
                = &server_main_self[0]->_lf_inputControlReactionTrigger.is_present;
        #ifdef FEDERATED_DECENTRALIZED
        // Add action server.inputControlReactionTrigger to array of intended_tag fields.
        _lf_intended_tag_fields[1] 
                = &server_main_self[0]->_lf_inputControlReactionTrigger.intended_tag;
        #endif // FEDERATED_DECENTRALIZED
    }
    {
        // Add action server.networkMessage to array of is_present fields.
        _lf_is_present_fields[2] 
                = &server_main_self[0]->_lf_networkMessage.is_present;
        #ifdef FEDERATED_DECENTRALIZED
        // Add action server.networkMessage to array of intended_tag fields.
        _lf_intended_tag_fields[2] 
                = &server_main_self[0]->_lf_networkMessage.intended_tag;
        #endif // FEDERATED_DECENTRALIZED
    }
    {
        int count = 0; SUPPRESS_UNUSED_WARNING(count);
        {
            // Add port server.server.out_parameter to array of is_present fields.
            _lf_is_present_fields[3 + count] = &server_server_self[0]->_lf_out_parameter.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port server.server.out_parameter to array of intended_tag fields.
            _lf_intended_tag_fields[3 + count] = &server_server_self[0]->_lf_out_parameter.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
        }
    }
    // Set reaction priorities for ReactorInstance server
    {
        server_main_self[0]->_lf__reaction_0.chain_id = 1;
        // index is the OR of level 0 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        server_main_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
        server_main_self[0]->_lf__reaction_1.chain_id = 1;
        // index is the OR of level 0 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        server_main_self[0]->_lf__reaction_1.index = 0xffffffffffff0000LL;
        server_main_self[0]->_lf__reaction_2.chain_id = 1;
        // index is the OR of level 2 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        server_main_self[0]->_lf__reaction_2.index = 0xffffffffffff0002LL;
        // Set reaction priorities for ReactorInstance server.server
        {
            server_server_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            server_server_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
            server_server_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 1 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            server_server_self[0]->_lf__reaction_1.index = 0xffffffffffff0001LL;
        }
    }
    // Initialize the scheduler
    size_t num_reactions_per_level[3] = 
        {3, 1, 1};
    sched_params_t sched_params = (sched_params_t) {
                            .num_reactions_per_level = &num_reactions_per_level[0],
                            .num_reactions_per_level_size = (size_t) 3};
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
