#include "main.h"
/**
 * more_numbers-prints numbers 1 to 14 10 times
 */
void more_numbers(void)
	{
		int a;
		int i;

		for (i = 0; i <= 9; i++)
		{
			for (a = 0; a <=14; a++)
			{
				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
	}
