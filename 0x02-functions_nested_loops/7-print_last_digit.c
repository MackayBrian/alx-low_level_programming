#include "main.h"
/**
 * print_last_digit-prints last digit of a number
 * @n:takes in an integer
 * Return: the last digit
 */
int print_last_digit(int n)
	{
		int rem = n % 10;

		if (n < 0)
			rem = rem * -1;
		_putchar('0' + rem);
		return (rem);
	}
