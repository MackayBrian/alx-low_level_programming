#include "main.h"
/**
 * puts_half-prints 2nd half of a string
 * @str:string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n, i;

	n = (len - 1) / 2;
	if (n % 2 == 0)
		n = len / 2;
	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
