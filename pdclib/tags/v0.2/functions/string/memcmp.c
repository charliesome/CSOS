/* $Id: memcmp.c 55 2005-01-11 06:42:51Z solar $ */

/* Release $Name$ */

/* memcmp( const void *, const void *, size_t )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <string.h>

int memcmp( const void * s1, const void * s2, size_t n )
{
    const unsigned char * p1 = (const unsigned char *) s1;
    const unsigned char * p2 = (const unsigned char *) s2;
    while ( n-- )
    {
        if ( *p1 != *p2 )
        {
            return *p2 - *p1;
        }
        ++p1;
        ++p2;
    }
    return 0;
}

#warning Test driver missing.
