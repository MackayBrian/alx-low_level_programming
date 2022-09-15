#include "main.h"
/**
 * _isdigit- chaecks if value entered is a didgit or not
 * @c:value entered by user
 *
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
	{
		if (isdigit(c) == 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
