#include <stdio.h>
/**
 * main - printing single digit number combination
 * Return: 0
 */

int main(void)
{
	while (i < 10)
	{
		putchar(i + 48);
		putchar(' ');
		putchar(',');
		i++;
	}

	putchar('\n');
	return (0);
}
