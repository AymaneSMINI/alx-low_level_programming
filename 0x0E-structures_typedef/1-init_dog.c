#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize dog
 * @d: dog's pointer
 * @name: string pointer
 * @age: float argument
 * @owner: string pointer
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
