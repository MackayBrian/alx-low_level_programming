#include "main.h"
/**
 * _isdigit- chaecks if value entered is a didgit or not
 * @c:value entered by user
 *
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
	{
		int i[10];

		for (i = 0; i < 10; i++)
		{
			c[i] = i;
		}
		if (isdigit(c))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
