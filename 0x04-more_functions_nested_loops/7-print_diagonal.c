#include "main.h"
/**
 * print_diagonal-prints a diagonal line on the terminal
 * @n: the number of \ character to be drawn.
 */
void print_diagonal(int n)
	{
		int line, gap;

		if (n > 0)
		{
			for (line = 0; line <= n; line++)
			{
				for (gap = 0; gap <= line; gap++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				if (line == n - 1)
				{
					continue;
				}
				_putchar('\n');
			}
		}
		_putchar('\n');
	}