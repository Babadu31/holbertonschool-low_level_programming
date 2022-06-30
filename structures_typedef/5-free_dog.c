#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - libère les chiens
 * @d: chiens à libérer
 * Return: 0
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d);
}
