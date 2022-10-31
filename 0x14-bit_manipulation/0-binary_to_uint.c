#include "main.h"
/**
 * binary_to_uint-converts a binary number to an unsigned int
 * @b:pointer to a string of 0 and 1 chars
 * Return:the converted number, or 0 if
 * there is one or more chars in
 * the string b that is not 0 or 1
 * is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1, len, c = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = len - 1;i >= 0; i--);
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			c += k;
		}
		k *= 2;
	}
	return (c);
}


 
