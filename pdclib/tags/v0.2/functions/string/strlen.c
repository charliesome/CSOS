/* $Id: strlen.c 58 2005-01-11 07:15:12Z solar $ */

/* Release $Name$ */

/* strlen( const char * )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <string.h>

size_t strlen( const char * s )
{
    size_t rc = 0;
    while ( s[rc] )
    {
        ++rc;
    }
    return rc;
}

#warning Test driver missing.
