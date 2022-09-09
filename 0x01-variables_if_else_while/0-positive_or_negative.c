#include <stdio.h>
/**
 * main-checks wether number entered is negative or positive
 *
 * Return:always (0)
 */
int main(void)
	{
		int n;

		printf("Enter a number:\n");
		scanf("%d", &n);
		if (n == 0)
			printf("%d is zero\n", &n);
		else if (n < 0)
			printf("%d is negative\n", &n);
		else
			printf("%d is positive\n", &n);
		Return(0);
	}
