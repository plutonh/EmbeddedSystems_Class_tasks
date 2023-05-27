/* Common definitions for 64-bit times and 32-bit unsigned microsteps. */

/*
Copyright (c) 2021, The University of California at Berkeley.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// Define PRINTF_TIME and PRINTF_MICROSTEP, which are the printf
// codes (like the d in %d to print an int) for time and microsteps.
// To use these, specify the printf as follows:
//     printf("Time: " PRINTF_TIME "\n", time_value);
// On most platforms, time is an signed 64-bit number (int64_t) and
// the microstep is an unsigned 32-bit number (uint32_t).
// Sadly, in C, there is no portable to print such numbers using
// printf without getting a warning on some platforms.
// On each platform, the code for printf if given by the macros
// PRId64 and PRIu32 defined in inttypes.h.  Hence, here, we import
// inttypes.h, then define PRINTF_TIME and PRINTF_MICROSTEP.
// If you are targeting a platform that uses some other type
// for time and microsteps, you can simply define
// PRINTF_TIME and PRINTF_MICROSTEP directly in the same file that
// defines the types _instant_t, _interval_t, and _microstep_t.
#include <inttypes.h>
#define PRINTF_TIME "%" PRId64
#define PRINTF_MICROSTEP "%" PRIu32

// For convenience, the following string can be inserted in a printf
// format for printing both time and microstep as follows:
//     printf("Tag is " PRINTF_TAG "\n", time_value, microstep);
#define PRINTF_TAG "(" PRINTF_TIME ", " PRINTF_MICROSTEP ")"

/**
 * Time instant. Both physical and logical times are represented
 * using this typedef.
 * WARNING: If this code is used after about the year 2262,
 * then representing time as a 64-bit long long will be insufficient.
 */
typedef int64_t _instant_t;

/**
 * Interval of time.
 */
typedef int64_t _interval_t;

/**
 * Microstep instant.
 */
typedef uint32_t _microstep_t;

/**
 * For user-friendly reporting of time values, the buffer length required.
 * This is calculated as follows, based on 64-bit time in nanoseconds:
 * Maximum number of weeks is 15,250
 * Maximum number of days is 6
 * Maximum number of hours is 23
 * Maximum number of minutes is 59
 * Maximum number of seconds is 59
 * Maximum number of nanoseconds is 999,999,999
 * Maximum number of microsteps is 4,294,967,295
 * Total number of characters for the above is 24.
 * Text descriptions and spaces add an additional 55,
 * for a total of 79. One more allows for a null terminator.
 */
#define LF_TIME_BUFFER_LENGTH 80
