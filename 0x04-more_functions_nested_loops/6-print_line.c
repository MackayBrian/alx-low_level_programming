#include "main.h"
/**
 * print_line- draws a straight line using _
 * @n: the number of _ characters
 */
void print_line(int n)
{
	int line;

	if (n <=  0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
		_putcahr('\n');
	}
}
