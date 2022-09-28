#include "main.h"
/**
 * _strlen_recursion-returns the length of a string
 * @s:string
 * Return:lenth of the string.
 */
int _strlen_recursion(char *s)
{
	static int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
