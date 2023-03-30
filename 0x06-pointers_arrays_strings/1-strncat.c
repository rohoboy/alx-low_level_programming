#include <stdio.h>
#include "main.h"
/**
 * _strncat - Entry
 * @dest: destination
 * @src: source
 * @n: length
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
