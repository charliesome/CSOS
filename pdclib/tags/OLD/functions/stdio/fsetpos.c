/* ----------------------------------------------------------------------------
 * $Id: fsetpos.c 36 2004-06-17 04:46:43Z solar $
 * ----------------------------------------------------------------------------
 * Public Domain C Library - http://pdclib.sourceforge.net
 * This code is Public Domain. Use, modify, and redistribute at will.
 * --------------------------------------------------------------------------*/

int fsetpos( FILE * stream, const fpos_t * pos ) { /* TODO */ };

/* PDPC code - unreviewed
{
    fseek(stream, *pos, SEEK_SET);
    return (0);
}
*/
