/*-
 * Copyright (c) 1988, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef _SYS_LIMITS_H_
#define	_SYS_LIMITS_H_

#include "freebsd/sys/sys/cdefs.h"
#include "freebsd/sys/amd64/include/_limits.h"

#if __POSIX_VISIBLE >= 200112 || __XSI_VISIBLE
#define	SIZE_T_MAX	__SIZE_T_MAX	/* max value for a size_t */

#define	OFF_MAX		__OFF_MAX	/* max value for an off_t */
#define	OFF_MIN		__OFF_MIN	/* min value for an off_t */
#endif

#if __BSD_VISIBLE
#define	GID_MAX		UINT_MAX	/* max value for a gid_t */
#define	UID_MAX		UINT_MAX	/* max value for a uid_t */

#define	UQUAD_MAX	(__UQUAD_MAX)	/* max value for a uquad_t */
#define	QUAD_MAX	(__QUAD_MAX)	/* max value for a quad_t */
#define	QUAD_MIN	(__QUAD_MIN)	/* min value for a quad_t */
#endif

#if __XSI_VISIBLE || __POSIX_VISIBLE >= 200809
#define	LONG_BIT	__LONG_BIT
#define	WORD_BIT	__WORD_BIT
#endif

#if __POSIX_VISIBLE
#define	MQ_PRIO_MAX	64
#endif

#endif /* !_SYS_LIMITS_H_ */
