#include "main.h"

/**
 * get_bit - Returns the Value of a Bit at a Given Index.
 * @n: Checking Bit
 * @index: Which to Check Bit
 * Return: The Value of the Bit at Index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
	return (1);

	else

	return (0);
}
