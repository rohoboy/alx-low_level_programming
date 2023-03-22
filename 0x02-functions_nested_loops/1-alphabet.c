#include "main.h"
/**
 * Print alphabets in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char c;
	for (c="a",c<"z",c++)
	{
		putchar(c);
	}
	putchar('\n');
}
