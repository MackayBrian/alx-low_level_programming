#include "main.h"
/**
 * *_memcpy- copies memory area
 * @dest: destinationi pointer
 * @src:source pointer
 * @n:Number of bytes to be coppied starting
 * from ptr to be filled
 * Return:pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i <= n; i++)
		dest[i] = src[i];
	return (dest);
}
