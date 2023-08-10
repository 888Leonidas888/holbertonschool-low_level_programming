#include "main.h"

/**
 * print_sign - Print in stdout the sign and retur an integer.
 * @n: Recive a number.
 *
 * Return: 1 if n > 0, 0 if equal 0 and -1 if n < 0.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
