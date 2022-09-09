#include <stdio.h>
/**
 * main-prints lowercase alphabets in reverse order
 *
 * Return:always 0
 */
int main(void)
	{
		char ch;

		for (ch = 'z'; ch >= 'a'; ch--)
		{
			putchar (ch);
		}
	putchar ('\n');
	return (0);
	}
