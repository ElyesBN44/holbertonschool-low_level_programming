#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a newline using recursion.
 * The string to be printed.
 * Return: The number of characters printed.
 */
int _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (_putchar('\n'));
	}
	_putchar(*s);
	return (_puts_recursion(s + 1) + 1);
}
