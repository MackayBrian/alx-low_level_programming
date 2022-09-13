#include "main.h"
/**
 * _islower-checks for lower case character
 *
 * Return: 0 when lower case else 1
 */
 int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
			return (0);
	}
