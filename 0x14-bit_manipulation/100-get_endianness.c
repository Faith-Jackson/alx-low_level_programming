#include "main.h"

/**
 * get_endianness - Checks The Endianness
 * Return: 0 if Big Endian, 1 if Little Endian
 */

int get_endianness(void)
{
	int j;
	char *c;

	j = 1;
	c = (char *)&j;

	return (*c);
}
