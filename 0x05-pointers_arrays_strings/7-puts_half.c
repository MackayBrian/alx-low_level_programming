#include "main.h"
/**
 * puts_half-prints second half of string
 * @str:string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	char secondh[20];
	int i, mid = len / 2;

	if (len % 2 != 0)
	{
		mid = (len - 1) / 2;
	}
	for (i = 0; i > mid; i++)
	{
		str[i] = *str;
	}
	puts(str);
}
