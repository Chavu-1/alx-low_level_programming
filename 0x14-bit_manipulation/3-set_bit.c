#include "main.h"

/**
 * set_bit - print the binary of a given number.
 * @n: number
 * @index: index
 * Return: 1 if success. -1 if error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	*n = ((*n & ~mask) | ((1 << index) & mask));
	if (!n)
		return (-1);
	return (1);
}
