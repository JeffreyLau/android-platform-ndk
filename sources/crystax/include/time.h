/*
 * Copyright (C) 2013 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef __CRYSTAX_TIME_H_9fd46807ae8c4a6cbf9e64f9c55cd57e
#define __CRYSTAX_TIME_H_9fd46807ae8c4a6cbf9e64f9c55cd57e

#include <crystax/id.h>

#include <crystax/google/time.h>

#ifdef __cplusplus
extern "C" {
#endif

int clock_nanosleep(clockid_t, int, const struct timespec *, struct timespec *);

#ifdef __cplusplus
} // extern "C"
#endif

#if !defined(__LP64__)

#include <xlocale.h>

#ifdef __cplusplus
extern "C" {
#endif

size_t strftime_l(char *s, size_t maxsize, const char *format,
                  const struct tm * timeptr, locale_t locale);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif /* !__LP64__ */

#endif /* __CRYSTAX_TIME_H_9fd46807ae8c4a6cbf9e64f9c55cd57e */