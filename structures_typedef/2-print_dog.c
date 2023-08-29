#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This function print a struct.
 * @d: Received a struct initialized.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	const char *NIL = "nil";

	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("Name:(%s)\n", NIL);
	else
		printf("Name: %s\n", (*d).name);

	printf("Age: %f\n", (*d).age);

	if ((*d).owner == NULL)
		printf("Owner: (%s)\n", NIL);
	else
		printf("Owner: %s\n", (*d).owner);

}
