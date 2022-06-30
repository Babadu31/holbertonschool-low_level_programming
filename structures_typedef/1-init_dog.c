#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialiser une variable de type struct dog
 * @d: structure chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
