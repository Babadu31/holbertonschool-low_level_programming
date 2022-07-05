#include "variadic_functions.h"

/**
 * print_numbers - imprime des chiffres
 * @separator: chaîne à imprimer entre les nombres
 * @n: nombre d'entiers passés à la fonction
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list list;

va_start(list, n);
for (x = 0; x < n; x++)
{
if (!separator)
printf("%d", va_arg(list, int));
else if (separator && x == 0)
printf("%d", va_arg(list, int));
else
printf("%s%d", separator, va_arg(list, int));
}
va_end(list);
printf("\n");
}
