#include "main.h"
/**
 * *_strncat- concatenates two strings
 * @dest:string destination
 * @src:string source
 * @n:number of bytes to be concatenated
 * Return:pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		++i;
	for (j = 0; src[j] != '\0' && j < n; ++j; ++i)
		dest[i] = src[j];
	dest[i] = '0';
	return (dest);
}
