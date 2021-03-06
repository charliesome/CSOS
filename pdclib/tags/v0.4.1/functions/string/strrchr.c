/* $Id: strrchr.c 85 2005-12-03 21:34:32Z solar $ */

/* Release $Name$ */

/* strrchr( const char *, int c )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <string.h>

#ifndef REGTEST

char * strrchr( const char * s, int c )
{
    size_t i = 0;
    while ( s[i++] );
    do
    {
        if ( s[--i] == (char) c )
        {
            return (char *) s + i;
        }
    } while ( i );
    return NULL;
}

#endif

#ifdef TEST
#include <_PDCLIB_test.h>

int main()
{
    char abccd[] = "abccd";
    BEGIN_TESTS;
    TESTCASE( strrchr( abcde, '\0' ) == &abcde[5] );
    TESTCASE( strrchr( abcde, 'e' ) == &abcde[4] );
    TESTCASE( strrchr( abcde, 'a' ) == &abcde[0] );
    TESTCASE( strrchr( abccd, 'c' ) == &abccd[3] );
    return TEST_RESULTS;
}
#endif
