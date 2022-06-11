#include "main.h"

/**
 * largest_number - renvoie le plus grand des 3 nombres
 * @a: premier entier
 * @b: deuxième entier
 * @c: troisième entier
 * Return: le plus grand nombre
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
