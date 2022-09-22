#include "main.h"
/**
 * *string_toupper- changes all lowercase letters of a string to uppercase
 * @s : string
 * Return:s
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i++])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
