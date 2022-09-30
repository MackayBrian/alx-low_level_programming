#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * check_num - check for digit
 * @str: aray str
 * Return: 0 on success
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main-adds positive numbers
 * @argc:numberof parameters
 * @argv:parameters passed
 * Return:0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, s_i;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			s_i = atoi(argv[i]);
			sum += s_i;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
