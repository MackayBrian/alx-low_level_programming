#include "main.h"
/**
 * print_line- draws a straight line using _
 * @n: the number of _ characters
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	putchar('\n');

