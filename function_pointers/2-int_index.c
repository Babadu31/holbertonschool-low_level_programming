#include "function_pointers.h"

/**
 * int_index - fonction qui recherche un entier
 * @array: tableau
 * @size: taille du tableau
 * @cmp: pointeur de fonction
 * Return: index du premier élément pour lequel la fonction cmp
 * Si aucun élément ne correspond, retourne -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int x;

if (size < 1 || array == NULL || cmp == NULL)
return (-1);

for (x = 0; x < size; x++)
{
if (cmp(array[x]))
return (x);
}
return (-1);
}
