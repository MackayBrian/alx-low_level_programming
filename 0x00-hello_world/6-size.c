#include <stdio.h>
/**
 * main-prints size of data types
 *
 * Return: Always return (0)
 */
int main(void)
	{
		char c;
		int i;
		long int li;
		long long ll;
		float f;

		printf("Size of char: %ld byte(s)\n", sizeof(c));
		printf("Size of an int: %ld byte(s)\n", sizeof(i));
		printf("Size of long int: %ld byte(s)\n", sizeof(li));
		printf("Size of long long: %ld byte(s)\n", sizeof(ll));
		printf("Size of float: %ld byte(s)\n", sizeof(f));
		return (0);
	}
