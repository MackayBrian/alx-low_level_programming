#include "main.h"
/**
 * *_strchr- locates a character in a string
 * @s:String from which character should be allocated
 * @c: character to be allocated
 * from ptr to be filled
 * Return:pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{

	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
