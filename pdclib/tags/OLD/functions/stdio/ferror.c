/* ----------------------------------------------------------------------------
 * $Id: ferror.c 36 2004-06-17 04:46:43Z solar $
 * ----------------------------------------------------------------------------
 * Public Domain C Library - http://pdclib.sourceforge.net
 * This code is Public Domain. Use, modify, and redistribute at will.
 * --------------------------------------------------------------------------*/

#ifndef __FILE_H
#define __FILE_H __FILE_H
#include <__FILE.h>
#endif // __FILE_H

int ferror( FILE * fh )
{
    return fh->ErrorIndicator;
}
