/* $Id: labs.c 92 2005-12-04 08:47:22Z solar $ */

/* Release $Name$ */

/* labs( long int )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <stdlib.h>

#ifndef REGTEST

long int labs( long int j )
{
    return ( j >= 0 ) ? j : -j;
}

#endif

#ifdef TEST
#include <_PDCLIB_test.h>
#include <limits.h>

int main()
{
    BEGIN_TESTS;
    TESTCASE( labs( 0 ) == 0 );
    TESTCASE( labs( LONG_MAX ) == LONG_MAX );
    TESTCASE( labs( LONG_MIN + 1 ) == -( LONG_MIN + 1 ) );
    return TEST_RESULTS;
}

#endif
