#include "main.h"
/**
 * *create_array-creates an array of chars,
 * and initializes it with a specific char.
 * @size:size of the charatcer
 * @c: the characte
 * Return: NULL if size zero, pointeror null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(1 * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for  (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
