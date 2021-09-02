#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints sequence of integers from argument value to 98
 *
 * Description:  Modify value of 'target' to alter number to print to
 *
 * @n:           First value to be printed in sequence to 98
 *
 * Return:       None
 */


void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
printf("98");
}
printf("\n");
}
