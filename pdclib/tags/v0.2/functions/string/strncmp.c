/* $Id: strncmp.c 55 2005-01-11 06:42:51Z solar $ */

/* Release $Name$ */

/* strncmp( const char *, const char *, size_t )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <string.h>

int strncmp( const char * s1, const char * s2, size_t n )
{
    while ( n && ( *s1 == *s2 ) )
    {
        ++s1;
        ++s2;
        --n;
    }
    if ( ( n == 0 ) )
    {
        return 0;
    }
    else
    {
        return ( *s1 - *s2 );
    }
}

#warning Test driver missing.
