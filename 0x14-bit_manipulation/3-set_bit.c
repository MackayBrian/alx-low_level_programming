#include "main.h"
/**
 * set_bit-ets the value of a bit to 1 at a given index
 * @n:pointer to the bit
 * @index:index is the index, starting from 0
 * of the bit you want to set
 *Return: -1 if failed otherwise 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
