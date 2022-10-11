#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dog
 * @d: dog pointer
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
