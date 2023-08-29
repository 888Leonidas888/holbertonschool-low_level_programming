#include "dog.h"

/**
 * new_dog - Initialize a struct dog_t.
 * @name:  Name
 * @age: Age
 * @owner: Owner
 *
 * Return: Pointer a struct of type dog_t, else NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int lenName, lenOwner;

	d = (dog_t *)malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	lenName = strlen(name);
	lenOwner = strlen(owner);

	(*d).name = (char *)malloc(sizeof(char) * lenName);

	if ((*d).name == NULL)
		return (NULL);
	strcpy((*d).name, name);

	(*d).owner = (char *)malloc(sizeof(char) * lenOwner);

	if ((*d).owner == NULL)
		return (NULL);
	strcpy((*d).owner, owner);

	(*d).age = age;

	return (d);
}
