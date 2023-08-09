#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _putchar - write string characters
 *@str: string character
 *
 * Return: On succes on integer
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char *str)
{
	return (write(1, str, strlen(str)));
}
