/* ----------------------------------------------------------------------------
 * $Id: mod.c 36 2004-06-17 04:46:43Z solar $
 * ----------------------------------------------------------------------------
 * Public Domain C Library - http://pdclib.sourceforge.net
 * This code is Public Domain. Use, modify, and redistribute at will.
 * --------------------------------------------------------------------------*/

double fmod( double x, double y ) { /* TODO */ };

/* Therx code
{
    return (int) ( ( ( ( x / y ) - ( (int) ( x / y ) ) ) * y ) + 0.5 );
}
*/

/* PDPC code - unreviewed
{
    return (x / y);
}
*/

float fmodf( float x, float y ) { /* TODO */ };
long double fmodl( long double x, long double y ) { /* TODO */ };

double modf( double x, double * integer ) { /* TODO */ };
float modff( float x, float * integer ) { /* TODO */ };
long double modfl( long double x, long double * integer ) { /* TODO */ };
