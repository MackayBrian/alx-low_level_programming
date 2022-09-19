#include "main.h"
/**
 * rev_string-verses a string
 * @s:string
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int mid = len / 2;
	char temp;

	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
