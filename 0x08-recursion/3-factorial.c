#include "main.h"
/**
 * factorial-returns the factorial of a given number
 * @n:number
 * Return:factorial
 */
int factorial(int n)
{
	int i;

	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	{
		i = n * factorial(n - 1);
		return (i);
	}
}
