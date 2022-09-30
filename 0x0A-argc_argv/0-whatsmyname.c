#include <stdio.h>
/**
 * main-prints name of program and new line
 * @argc: parameter
 * @argv:array of command listed
 * Return: o for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
