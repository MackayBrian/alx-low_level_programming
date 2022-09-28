#include "main.h"
/**
 * helper- returns 0 0r 1
 * @num:number being checked
 * @i: possible factor of the number
 * Return: 0 if not prime 1 otherwise
 */
int helper(int num, int i)
{
	if (num < 0)
	{
		if (num % 1 == 0)
		{
			return (0);
		}
		else
		{
			return (helper(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number-checks if number is prime or not
 * @n:number to be checked
 * Return:1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helper(n, 2));
	}
}
