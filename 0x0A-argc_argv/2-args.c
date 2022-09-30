#include <stdio.h>
/**
 * main- prints all arguments it receives
 * @argv: arguments passed
 * @argc: no of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
