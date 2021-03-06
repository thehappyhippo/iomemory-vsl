//-----------------------------------------------------------------------------
// Copyright (c) 2006-2014, Fusion-io, Inc.(acquired by SanDisk Corp. 2014)
// Copyright (c) 2014 SanDisk Corp. and/or all its affiliates. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// * Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
// * Neither the name of the SanDisk Corp. nor the names of its contributors
//   may be used to endorse or promote products derived from this software
//   without specific prior written permission.
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
// OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//-----------------------------------------------------------------------------

#ifndef _FIO_PORT_UTYPES_H_
#define _FIO_PORT_UTYPES_H_

#include <fio/port/port_config.h>

#if defined(__KERNEL__)
#error You should only include utype.h in user code -- not kernel.
#endif // __KERNEL__
#if defined(__ESXI5__)
#include <fio/port/esxi5/utypes.h>
#elif defined(USERSPACE_KERNEL)
# include <fio/port/userspace/utypes.h>
#elif defined(__linux__)
#include <fio/port/linux/utypes.h>
#elif defined(__SVR4) && defined (__sun)
#include <fio/port/solaris/utypes.h>
#elif defined(__FreeBSD__)
#include <fio/port/freebsd/utypes.h>
#elif defined(__OSX__)
#include <fio/port/osx/utypes.h>
#elif defined(WINNT) || defined(WIN32)
#include <fio/port/windows/utypes.h>
#elif defined(UEFI)
// There is no file here for UEFI
#else
#error Unsupported OS - if you are porting, try starting with a copy of stubs
#endif

#include <fio/port/kglobal.h>

#endif /* _FIO_PORT_UTYPES_H_ */
