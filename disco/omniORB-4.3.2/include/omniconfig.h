/* -*- Mode: C++; -*-
 *                            Package   : omniORB
 * omniconfig.h.in            Created on: 2002/07/11
 *                            Author    : Duncan Grisby (dgrisby)
 *
 *    Copyright (C) 2002-2023 Duncan Grisby
 *
 *    This file is part of the omniORB library
 *
 *    The omniORB library is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 2.1 of the License, or (at your option) any later version.
 *
 *    This library is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Library General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with this library. If not, see http://www.gnu.org/licenses/
 *
 *
 * Description:
 *	*** PROPRIETARY INTERFACE ***
 *
 *      omniconfig.h used when using autoconf. Copying of this file
 *      over the non-autoconf version selects the autoconf setup.
 */

#ifndef __omniconfig_h__
#define __omniconfig_h__

#include <omniORB4/acconfig.h>

#if !defined(__linux__)          && \
    !defined(__cygwin__)         && \
    !defined(__sunos__)          && \
    !defined(__osf1__)           && \
    !defined(__hpux__)           && \
    !defined(__nextstep__)       && \
    !defined(__irix__)           && \
    !defined(__aix__)            && \
    !defined(__darwin__)         && \
    !defined(__freebsd__)        && \
    !defined(__FreeBSD_kernel__) && \
    !defined(__netbsd__)         && \
    !defined(__openbsd__)        && \
    !defined(__osr5__)           && \
    !defined(__hurd__)           && \
    !defined(__win32__)
# define __linux__ 1
#endif

#if !defined(__x86__)     && \
    !defined(__x86_64__)  && \
    !defined(__sparc__)   && \
    !defined(__alpha__)   && \
    !defined(__m68k__)    && \
    !defined(__mips__)    && \
    !defined(__arm__)     && \
    !defined(__arm64__)   && \
    !defined(__s390__)    && \
    !defined(__ia64__)    && \
    !defined(__hppa__)    && \
    !defined(__powerpc__) && \
    !defined(__riscv)
# define __x86_64__ 1
#endif

#define __OSVERSION__ 2

#endif
