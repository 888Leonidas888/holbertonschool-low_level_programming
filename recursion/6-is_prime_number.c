#include "main.h"

/**
 * is_prime_number - Evaluate if a number is prime.
 * @n: Number evaluate
 *
 * Return: 1 succes,else 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	if (n % 2 == 0)
		return (0);
	return (is_prime_number(n / 2) ? 1 : 0);
}
