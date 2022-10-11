#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - initialize dog
 * @name: string pointer
 * @age: float argument
 * @owner: string pointer
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *proprietor;
	char *title;

	if (name == NULL)
		return (NULL);
	proprietor = owner;
	title = name;
	d = malloc(sizeof(dog_t));
	if (d== NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
