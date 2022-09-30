#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main-multiplies two numbers
 * @argv: arguments passed
 * @argc: no of arguments
 * Return: 0 on succes and 1 when one argument is passed
 */
int main(int argc, char *argv[])
{
	int num1, result = 0, num2;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
