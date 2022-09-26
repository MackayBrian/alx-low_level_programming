#include "main.h"
/**
 * *_strpbrk-earches a string for any of a set of bytes
 * @s:main string
 * @accept:string to be searched
 * Return:ointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	size_t i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(accept); j++)
		{
			while (accept[j] == s[i])
				s = s + j;
			break;
		}
	}
	return (s);
}
