#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a: a
* @b: b
* return void
*/
void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
