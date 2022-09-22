#include "main.h"
/**
 * *string_toupper- changes all lowercase letters of a string to uppercase
 * @str : string
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
		if ((str[i] == (' ' || '\t' || '\n' || ',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}')
					++i;
					if (arr[i] >= 'a' && arr[i] <= 'z')
				    str[i] = str[i] - 32;
			    continue;
			    }
			    else
		if (str[i] >= 'A' && str[i] <= 'Z')
    str[i] = str[i] + 32;
    }
return (0);
}
