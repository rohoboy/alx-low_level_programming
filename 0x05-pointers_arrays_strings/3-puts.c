#include "main.h"
/**
 * _puts - Entry point
 * @str: String
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

