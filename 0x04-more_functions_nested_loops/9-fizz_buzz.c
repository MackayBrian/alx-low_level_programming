#include <stdio.h>
/**
 * main - prints numbers 1 t0 100 but multiple of three,
 * Fizz is printed, buzz in place of multiples of fives
 * and fizzbuzz in multiple of both
 * Return: always 0
 */
int main(void)
	{
		int i;

		for (i = 1; i <= 100; i++)
		{
			if ((i % 3) == 0 && (i % 5) == 0)
			{
				printf("FizzBuzz");
			}
			else if ((i % 3) == 0)
			{
				printf("Fizz");
			}
			else if ((i % 5) == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d", i);
			}
			if (i == 100)
			{
				continue;
			}
			printf(" ");
		}
		printf("\n");
		return (0);
	}
