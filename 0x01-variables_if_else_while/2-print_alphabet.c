#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-prints all lower case alphabets in order
 *
 * Return: return 0
 */
int main(void)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		return (0);
	}

