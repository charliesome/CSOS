/* $Id: memmove.c 55 2005-01-11 06:42:51Z solar $ */

/* Release $Name$ */

/* memmove( void *, const void *, size_t )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <string.h>

void * memmove( void * s1, const void * s2, size_t n )
{
    char * dest = (char *) s1;
    const char * src = (const char *) s2;
    if ( dest < src )
    {
        while ( n-- )
        {
            *dest++ = *src++;
        }
    }
    else
    {
        src += n;
        dest += n;
        while ( n-- )
        {
            *dest-- = *src--;
        }
    }
    return s1;
}

#warning Test driver missing.
