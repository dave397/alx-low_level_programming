#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	int name_length = strlen(name);
	int owner_length = strlen(owner);

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * (name_length + 1));

	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = malloc(sizeof(char) * (owner_length + 1));

	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}

	strcpy(n_dog->name, name);
	strcpy(n_dog->owner, owner);
	n_dog->age = age;

	return (n_dog);
}
