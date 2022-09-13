#include "main.h"
/**
 * print_sign-ptints the sign of a number
 *
 */
int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putcahr('-');
			return (-1);
		}
	}

