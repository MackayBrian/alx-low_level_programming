#include "main.h"
/**
 * _strcmp-compares two string
 * @s1:first string
 * @s2:second string
 * Return:flag
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int flag = 0;

	while (i)
	{
		if s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s[i] == '\0')
		{
			flag = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			flag = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (flag);
}
