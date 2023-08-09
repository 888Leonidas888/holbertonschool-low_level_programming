#include <stdlib.h>
#include "main.h"

/**
 * _putchar - write _putchar
 *
 * Return: On succes on integer
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(void)
{
	return (system("echo _putchar"));
}
