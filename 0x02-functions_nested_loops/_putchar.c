#include <unistd.h>
/**
 * _putchar - A program that prints _putchar
 * Return: 1 (Success)
 * On error, -1
 */
int _putchar(char ch)
{
return (write(1, &ch, 1));
}
