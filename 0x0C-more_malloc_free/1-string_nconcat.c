#include "main.h"
/**
 * string_nconcat-concatenates two strings
 * @s1:first string
 * @s2:second string
 * @n:memory amount
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int so1 = 0, so2 = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[so1])
	{
		so1++;
	}
	while (s2[so2])
	{
		so2++;
	}
	if (n >= so2)
	{
		n = so2;
		p = malloc((so1 + n + 1) * sizeof(char));
	}
	if (p == NULL)
		return (0);
	for (i = 0; i < so1; i++)
	{
		p[i] = s1[i];
	}
	for (; i < (so1 + n); i++)
	{
		p[i] = s2[i - so1];
	}
	p[i] = '\0';
	return (p);
}
