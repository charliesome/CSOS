/* $Id: rand.c 114 2005-12-23 16:04:43Z solar $ */

/* Release $Name$ */

/* rand( void )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <stdlib.h>

#ifndef REGTEST

int rand( void )
{
    _PDCLIB_seed = _PDCLIB_seed * 1103515245 + 12345;
    return (unsigned int) ( _PDCLIB_seed / 65536 ) % 32768;
}

#endif

#ifdef TEST
#include <_PDCLIB_test.h>

int main()
{
    int rnd1, rnd2;
    BEGIN_TESTS;
    TESTCASE( ( rnd1 = rand() ) < RAND_MAX );
    TESTCASE( ( rnd2 = rand() ) < RAND_MAX );
    srand( 1 );
    TESTCASE( rand() == rnd1 );
    TESTCASE( rand() == rnd2 );
    return TEST_RESULTS;
}

#endif
