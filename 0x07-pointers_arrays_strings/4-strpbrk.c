#include "main.h"
/**
 * *_strpbrk-earches a string for any of a set of bytes
 * @s:main string
 * @accept:string to be searched
 * Return:ointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
