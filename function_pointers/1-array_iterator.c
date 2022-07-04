#include "function_pointers.h"

/**
 * array_iterator - exécute une fonction donnée en paramètre
 * sur chaque élément d'un tableau
 * @array: tableau
 * @size: taille du tableau
 * @action: pointeur de fonction
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;

if (array == NULL)
return;
if (action == NULL)
return;

for (x = 0; x < size; x++)
action(array[x]);
}
