/* $Id: _PDCLIB_test.h 73 2005-11-21 18:10:09Z solar $ */

/* Release $Name$ */

/* PDCLib testing suite <_PDCLIB_test.h>

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

/* -------------------------------------------------------------------------- */
/* Helper macros for test drivers                                             */
/* -------------------------------------------------------------------------- */

#include <stdio.h>

char const abcde[] = "abcde";
char const abcdx[] = "abcdx";

#define BEGIN_TESTS   unsigned int rc = 0
#define TESTCASE( x ) if ( x ) {} \
                      else { rc += 1; printf( "Testcase failed: " __FILE__ " - " #x "\n" ); }
#define TEST_RESULTS  rc
