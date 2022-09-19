#include "main.h"
/**
 * rev_string-verses a string
 * @s:string
 */
void rev_string(char *s)
{
	int len = strlen(s);

	while (len--)
		puts(s);
}
