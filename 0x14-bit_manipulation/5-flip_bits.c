#include "main.h"
/**
 * flip_bits - Flip to get from one number to another.
 * @n: The First Number
 * Return: The Number of Bits you Would Need to Flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int i, j;

	i = 0;
	result = 1;
	differnce = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (result == (differnce & result))
			i++;
		result <<= 1;
	}

	return (i);
}
