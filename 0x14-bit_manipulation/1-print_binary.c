#include "main.h"

/**
 * _power - Calculate Base & power
 * @base: Base of the Exponet
 * @pow: Power of the Exponet
 * Return: Value  of Base & Power
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int j;

	num = 1;
	for (j = 1; j <= pow; j++)
		num *= base;
	return (num);
}

/**
 * print_binary - Prints the Binary Representation of a number
 * @n: Number  Printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
