#include "dog.h"

/**
 * init_dog - dog function
 * @d: dog var
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->age = age;
d->name = name;
d->owner = owner;
}
