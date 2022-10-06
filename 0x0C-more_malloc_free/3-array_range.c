#include "main.h"
/**
 * *array_range-creates an array of integers
 * @min:minimum
 * @max:maximum
 * Return:array
 */
int *array_range(int min, int max)
{
	int *arr, t = min, i = 0;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (NULL);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}

