#include "main.h"
#include <stdbool.h>
/**
 * _strspn- gets the length of a prefix substring
 * @s:main string
 * @accept:subtring
 * Return:number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				l++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (l);
		}
		s++;
	}
	return (i);
}
