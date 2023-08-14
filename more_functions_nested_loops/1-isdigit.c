#include "main.h"

/**
 * _isdigit - check for a digit.
 * @c: character for validate.
 *
 * Return: 1 success and 0 otherwise.
 */
int _isdigit(int c)
{
	int result;

	result = (isdigit(c));

	if (result == 0)
		return (0);
	else
		return (1);
}
