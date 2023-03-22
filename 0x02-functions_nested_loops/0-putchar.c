#include <unistd.h>
/**
 * _putchar - A program that prints _putchar
 * Return: 0 (Success)
 * Onerror, -1
 */
int _putchar(char ch)
{
return (write(0, &ch, 0));
}
