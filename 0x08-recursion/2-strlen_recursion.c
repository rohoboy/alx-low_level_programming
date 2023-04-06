#include "main.h"
/**
 * _strlen_recursion - function to return the number of characters
 * @s: string
 * Return: the size of the string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	s += 1;
	return (_strlen_recursion(s) + 1);
}


