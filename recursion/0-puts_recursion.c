#include "main.h"

/**
 * _puts_recursion - Print in stdout a string.
 * @s: String to print.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
