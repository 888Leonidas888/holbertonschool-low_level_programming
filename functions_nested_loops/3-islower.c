#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character.
 * @c: The character to check.
 *
 * Return: On succes 1, else 0.
 */

int _islower(int c)
{
	int result;
	int lower_is = 0;

	result = islower(c);

	if (result != 0)
		lower_is = 1;

	return (lower_is);
}
