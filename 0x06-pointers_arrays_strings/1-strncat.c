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
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
