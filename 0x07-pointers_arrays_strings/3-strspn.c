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
	size_t init_len = 0, i, j;
	size_t len1 = strlen(s);
	size_t len2 = strlen(accept);
	bool found_match = false;

	for (size_t i = 0; i < len1; i++)
	{
		for (size_t j = 0; j < len2; j++)
			if (accept[j] == s[i])
			{
				found_match = true;
				init_len++;
				break;
			}
		if (!found_match)
			break;
	}
	return (init_len);
}

