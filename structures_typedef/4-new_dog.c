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
	char *new_name;
	char *new_owner;

	int lenName, lenOwner;

	d = (dog_t *)malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	lenName = strlen(name);
	lenOwner = strlen(owner);

	new_name = (char *)malloc(sizeof(char) * lenName);

	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}

	strcpy(new_name, name);

	new_owner = (char *)malloc(sizeof(char) * lenOwner);

	if (new_owner == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(new_owner, owner);

	(*d).name = new_name;
	(*d).age = age;
	(*d).owner = new_owner;

	return (d);
}
