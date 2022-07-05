#include "variadic_functions.h"

/**
 * sum_them_all - somme de tous ses paramètres
 * @n: nombres d'arguments
 * Return: 0 si n est égale à 0 ou sinon
 * retourne la sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list list;
int sum = 0;
unsigned int x;
va_start(list, n);
for (x = 0; x < n; x++)
sum += va_arg(list, int);
va_end(list);
return (sum);
}
