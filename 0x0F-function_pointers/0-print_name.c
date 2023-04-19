#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - function to print name
 * @name: name
 * @f:  callback function
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
