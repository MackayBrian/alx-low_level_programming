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
	int i, j;

	i = 0;
	while (src[i++])
		j++
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = j; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
