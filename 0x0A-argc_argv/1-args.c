#include <stdio.h>
/**
 * main-prints the number of arguments passed into it
 * @argc:no. of arguments
 * @argv:arguments passed
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
