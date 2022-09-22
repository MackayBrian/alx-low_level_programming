#include "main.h"
/**
 * *_strncpy-copies a string
 * @dest: string destination
 * @src: string source
 * @n:number of bytes to be coppied
 * Return: to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
		dest[i] = '\0';
	return (dest);
}
