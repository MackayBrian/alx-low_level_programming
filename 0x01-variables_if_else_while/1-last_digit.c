#include <stdio.h>
/**
 * main-prints address and number and compares it to another number
 *
 * Return: always return 0
 */
int main(void)
		{
			int n;

			printf("Enter the value of n:\n");
			scanf("%d", &n);
			if (n > 5)
				printf("the last digit of %u is %d and is greater than 5\n", &n, n);
			else if (n == 0)
				printf("the last digit of %u is %d and is 0\n", &n, n);
			else if (n < 6 && n != 0)
				printf("the last digit of %u is %d and is less than 6 and not 0\n", &n, n);
			return (0);
		}
