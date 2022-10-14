#include "variadic_functions.h"
/**
 * sum_them_all-returns the sum of all its parameters.
 * @n:number of arguments to be passed
 * Return:0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lis;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(lis, n);
	for (i = 0; i < n; i++)
		sum += va_arg(lis, int);
	va_end(lis);
	return (sum);
}
