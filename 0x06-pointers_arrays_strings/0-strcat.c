#include "main.h"
/**
 * *_strcat-concatenates two strings
 * @dest:destination string
 * @src:source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
