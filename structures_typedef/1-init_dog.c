#include "dog.h"

/**
 * init_dog - This function initialize a variable of type dog.
 * @d: Pointer to struct.
 * @name: Name of struct.
 * @age: Age of struct.
 * @owner: Owner of struct.
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
