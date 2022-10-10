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
