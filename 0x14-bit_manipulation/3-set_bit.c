#include "main.h"

/**
 * set_bit - Sets the Value of a Bit to 1 at a Given Index.
 * @index: Starting From 0 of the Bit to be Set
 * @n: Pointer Number of i
 * Return: 1 if it Worked, or -1 if an Error Occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 6 - 1))
		return (-1);
	j = 1 << index;
	*n = *n | j;

	return (1);
}
