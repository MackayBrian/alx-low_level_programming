#include "main.h"
/**
 * *_strdup-turns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str:pointer tostring being dublicated
 * Return: Null if str is null
 * pointer to dublicated string on success
 * NULL if memory is insufficient.
 */
char *_strdup(char *str);
{
	char *nstr;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	nstr = malloc(1 * (len + 1));
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
