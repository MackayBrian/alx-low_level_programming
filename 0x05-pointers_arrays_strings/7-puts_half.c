#include "main.h"
/**
 * puts_half-prints second half of string
 * @str:string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i, mid;

	if (len % 2 == 1)
	{
		mid = (len - 1) / 2;
	}
	else
	{
			mid = len / 2;
	}
	for (i = mid; i < len; i++)
	{
		puts(str[i]);
	}
	_putchar('\n');
}
