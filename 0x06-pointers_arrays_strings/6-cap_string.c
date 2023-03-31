#include "main.h"
/**
 * cap_string -Entry point
 * @n: string
 * Return: string
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i])
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
			i++;
		if (n[i] == ' ' ||
		n[i] == '\t' ||
		n[i] == '\n' ||
		n[i] == ',' ||
		n[i] == '.' ||
		n[i] == ';' ||
		n[i] == '?' ||
		n[i] == '!' ||
		n[i] == '"' ||
		n[i] == '(' ||
		n[i] == ')' ||
		n[i] == '{' ||
		n[i] == '}' ||
		i  == 0)
			n[i] -= 32;
		i++;
	}
	return (n);
}
