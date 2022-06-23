#include "main.h"

/**
 * factorial - renvoie la factorielle d'un nombre donné
 * @n: nombre ou retourner la factorielle de
 * Return: factoriel de n
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
