#include "dog.h"
#include <stdlib.h>

/**
 * copy - copie un string
 * @x: destination du string
 * @z: source du string
 * Return: adresse du string
 */

char *copy(char *x, char *z)
{
int y;

for (y = 0; z[y] != '\0'; y++)
x[y] = z[y];
x[y] = '\0';
return (x);
}

/**
 * new_dog - crée un nouveau chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriètaire du chien
 * Return: chien, NULL si la fonction échoue
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *str;

str = malloc(sizeof(dog_t));
if (str == NULL)
return (NULL);

str->name = malloc(sizeof(name) + 1);
if (str->name == NULL)
{
free(str);
return (NULL);
}
str->owner = malloc(sizeof(owner) + 1);
if (str->owner == NULL)
{
free(str->name);
free(str);
}
str->age = age;
str->name = (copy(str->name, name));
str->owner = (copy(str->owner, owner));
return (str);
}
