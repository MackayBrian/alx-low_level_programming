#include "main.h"
/**
 * _strlen_recursion-returns the length of a string
 * @s:string
 * Return:lenth of the string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_strlen_recursion(++s);
		i++;
	}
	return (i);
}
