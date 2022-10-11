#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - define new type dog
 * @name: name of dog (string pointer)
 * @age: age of dog (float argument)
 * @owner: dog's owner (string pointer)
 *
 * Description: new type dog contains name, age, owner of th dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
