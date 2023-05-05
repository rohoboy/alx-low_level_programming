#include "main.h"

/**
 * print_binary - function that prints the binary of a given decimal number
 * @n: number in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int index;

	for (i = 63; i >= 0; i--)
	{
		index = n >> i;

		if (index & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}

