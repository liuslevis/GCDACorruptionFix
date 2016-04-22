// https://llvm.org/svn/llvm-project/compiler-rt/branches/release_37/lib/profile/InstrProfilingUtil.h
/*===- InstrProfilingUtil.h - Support library for PGO instrumentation -----===*\
 |*
 |*                     The LLVM Compiler Infrastructure
 |*
 |* This file is distributed under the University of Illinois Open Source
 |* License. See LICENSE.TXT for details.
 |*
 \*===----------------------------------------------------------------------===*/

#ifndef PROFILE_INSTRPROFILINGUTIL_H
#define PROFILE_INSTRPROFILINGUTIL_H

/*! \brief Create a directory tree. */
void __llvm_profile_recursive_mkdir(char *Pathname);

#endif  /* PROFILE_INSTRPROFILINGUTIL_H */