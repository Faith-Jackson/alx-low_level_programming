#include "main.h"

/**
 * clear_bit - Sets the Value of a Bit to 0 at a Given Index.
 * @n: Num  of j
 * @index: Starting From 0 of the Bit to be Set
 * Return: 1 If it Worked, or -1 if an Error Occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 6 - 1))
		return (-1);
	j = ~(1 << index);
	*n = *n & j;

	return (1);
}
