#include "main.h"
/**
 * swap_int-swaps two integers
 * @a:first integer
 * @b:2nd integer
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
