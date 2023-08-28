#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structut for created a dog.
 *@name: Name of dog.
 *@age: Age of dog.
 *@owner: Owner of dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
