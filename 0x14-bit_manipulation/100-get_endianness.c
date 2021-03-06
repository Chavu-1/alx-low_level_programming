#include "main.h"

/**
 * get_endianness - checks the endianness of the processor
 *
 * Return: returns 1 for little endian, 0 for big
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (c[0] == 1)
		return (1);
	return (0);
}
