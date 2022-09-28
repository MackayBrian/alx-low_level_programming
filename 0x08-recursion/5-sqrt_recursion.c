#include "main.h"
/**
 * _sqrt-checks if sqrt of number exsts
 * @num:number
 * Return:square root
 * @i:posiible sqrt of num
 */
int _sqrt(int num, int i)
{
	if ((i * i) == num)
	{
		return (i);
	}
	else
	{
		if ((i * i) > num)
		{
			return (-1);
		}
		else
		{
			return (_sqrt(num, i + 1));
		}
	}
}
/**
 * _sqrt_recursion-returns the natural square root of a number
 *  @n:number
 *   Return:square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}
