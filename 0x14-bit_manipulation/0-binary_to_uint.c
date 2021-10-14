#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int.
 * @b: binary value
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, sum = 0, base = 1;
	int i;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += base;
		base = base * 2;
	}
	return (sum);
}
