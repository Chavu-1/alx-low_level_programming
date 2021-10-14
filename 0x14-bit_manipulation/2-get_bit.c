#include "main.h"

/**
 * get_bit - return the index of a binary number.
 * @n: number
 * @index: index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
