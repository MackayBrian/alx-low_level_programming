#include "main.h"
/**
 * _sqrt_recursion-returns the natural square root of a number
 * @n:number
 * Return:square root
 */
int _sqrt_recursion(int n)
{
	int i, square = i * i, sqrt;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	sqrt = (_sqrt_recursion(n, i + 1));
	return (sqrt);
}
