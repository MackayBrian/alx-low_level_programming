#include "main.h"
/**
 * print_rev-prints string in a reverse order
 * @s:string
 */
void print_rev(char *s)
	{
		int len = strlen(s);

		while (len--)
			_putchar(*(s + len));
		_putchar('\n');
	}
