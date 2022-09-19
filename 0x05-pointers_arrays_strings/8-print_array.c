#include "main.h"
/**
 * print_array-prints integers in an array
 * @a:array name
 * @n:number of values
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
	}
}
