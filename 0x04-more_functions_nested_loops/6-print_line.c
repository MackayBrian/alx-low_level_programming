#include "main.h"
/**
 * print_line- draws a straight line using _
 * @n: the number of _ characters
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int line;

		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

