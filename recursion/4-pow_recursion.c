#include "main.h"
#include <stdio.h>

/**
 * _pow_recursive - renvoie la valeur de x élevée à la puissance y
 * @x: numéro donné
 * @y: exposant
 * Return: affiche le résultat de la valeur de x
 * élevée à la puissance y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
