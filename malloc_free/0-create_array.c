#include <stdlib.h>

/**
 * create_array - créer un tableau de caractères
 * et initialiser avec un caractère spécifique
 * @size: taille du tableau
 * @c: caractère spécifique
 * Return: pointeur de caractère vers l'adresse mémoire
 * créée par malloc ou NULL en cas d'erreur
 */

char *create_array(unsigned int size, char c)
{
char *x;
unsigned int y;

if (size == 0)
return (NULL);

x = malloc(size * sizeof(*x));
if (x == NULL)
return (NULL);

for (y = 0; y < size; y++)
x[y] = c;
return (x);
}
