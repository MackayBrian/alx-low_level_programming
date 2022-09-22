#include "main.h"
/**
 * *string_toupper- changes all lowercase letters of a string to uppercase
 * @str : string
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[++i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		i++;
		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')
			str[i] -= 32;
	}
	return (str);
}
