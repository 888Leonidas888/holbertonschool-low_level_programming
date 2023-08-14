#include "main.h"

/**
 * _isupper - Test for un uppercase letter
 * @c: letter in check
 *
 * Return: different of 0 if is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	int result;

	result = isupper(c);

	if (result == 0)
		return (0);
	else
		return (1);
}
