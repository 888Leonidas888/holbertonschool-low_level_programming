#include "dog.h"

/**
 * free_dog - Clean memory.
 * @d: Pointer to struct.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
<<<<<<< HEAD
	if (d != NULL)
	{
		free(d.name);
		free(d.owner);
		free(d);
	}
=======
	free((*d).name);
	free((*d).owner);
	free(d);
>>>>>>> 8e36fea54fd90148f7fbdfc4886921e92368e10a
}
