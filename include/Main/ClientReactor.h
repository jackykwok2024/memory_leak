#ifndef clientreactor1101451553_H
#define clientreactor1101451553_H
#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "pythontarget.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/api/set.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct clientreactor_self_t{
int end[0]; // placeholder; MSVC does not compile empty structs
} clientreactor_self_t;
#line 14 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
typedef generic_port_instance_struct clientreactor1101451553_in_parameter_t;
#line 15 "/mnt/c/Users/jacky/Desktop/Memory_Leak/src/Main.lf"
typedef generic_port_instance_struct clientreactor1101451553_out_parameter_t;
#endif
