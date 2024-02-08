#include "main.h"

/**
 * binary_to_uint - Converts a Binary Number to an Unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: Converted Number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int k;

	k = 0;
	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		k <<= 1;
		if (b[j] == '1')
			k += 1;
	}
	return (k);
}
