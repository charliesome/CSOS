/* $Id: srand.c 101 2005-12-15 12:34:01Z solar $ */

/* Release $Name$ */

/* srand( unsigned int )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <stdlib.h>

#ifndef REGTEST

void srand( unsigned int seed )
{
    _PDCLIB_seed = seed;
}

#endif

#ifdef TEST
#include <_PDCLIB_test.h>

int main()
{
    BEGIN_TESTS;
    /* tested in rand.c */
    return TEST_RESULTS;
}

#endif
