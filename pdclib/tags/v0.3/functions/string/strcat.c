/* $Id: strcat.c 71 2005-11-21 18:08:43Z solar $ */

/* Release $Name$ */

/* strcat( char *, const char * )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <_PDCLIB_aux.h>

char * strcat( char * _PDCLIB_restrict s1, const char * _PDCLIB_restrict s2 )
{
    char * rc = s1;
    if ( *s1 )
    {
        while ( *++s1 );
    }
    while ( (*s1++ = *s2++) );
    return rc;
}

#ifdef TEST
#include <_PDCLIB_test.h>

int main()
{
    char s[] = "xx\0xxxxxx";
    BEGIN_TESTS;
    TESTCASE( strcat( s, abcde ) == s );
    TESTCASE( s[2] == 'a' );
    TESTCASE( s[6] == 'e' );
    TESTCASE( s[7] == '\0' );
    TESTCASE( s[8] == 'x' );
    s[0] = '\0';
    TESTCASE( strcat( s, abcdx ) == s );
    TESTCASE( s[4] == 'x' );
    TESTCASE( s[5] == '\0' );
    TESTCASE( strcat( s, "\0" ) == s );
    TESTCASE( s[5] == '\0' );
    TESTCASE( s[6] == 'e' );
    return TEST_RESULTS;
}
#endif
