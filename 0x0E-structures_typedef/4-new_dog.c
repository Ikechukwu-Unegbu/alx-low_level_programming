#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog function
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int x = 0, y = 0, k;
	dog_t *dogo;

	while (name[x] != '\0')
		x++;
	while (owner[y] != '\0')
		y++;
	dogo = malloc(sizeof(dog_t));
	if (dogo == NULL)
	{
		free(dogo);
		return (NULL);
	}
	dogo->name = malloc(x * sizeof(dogo->name));
	if (dogo->name == NULL)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	for (k = 0; k <= x; k++)
		dogo->name[k] = name[k];
	dogo->age = age;
	dogo->owner = malloc(y * sizeof(dogo->owner));
	if (dogo->owner == NULL)
	{
		free(dogo->owner);
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	for (k = 0; k <= y; k++)
		dogo->owner[k] = owner[k];
	return (dogo);
}