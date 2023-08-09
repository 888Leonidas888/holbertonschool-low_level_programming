#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check for alphabetic character.
 * @c: Check the character.
 *
 * Return: On success 1, else 0.
 */

int _isalpha(int c)
{
	int result;
	int alpha_is = 0;

	result = isalpha(c);

	if (result != 0)
		alpha_is = 1;

	return (alpha_is);

}
