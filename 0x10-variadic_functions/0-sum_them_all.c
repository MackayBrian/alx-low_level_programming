#include "variadic_functions.h"
/**
 * sum_them_all-returns the sum of all its parameters.
 * @n:number of arguments to be passed
 * Return:0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list list;
	int sum = 0;
	int i = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
