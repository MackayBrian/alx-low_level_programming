#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name-prints a name
 *@name:name to be printed
 *@f:ponter to function print_name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f && !name)
		f(name);
}
