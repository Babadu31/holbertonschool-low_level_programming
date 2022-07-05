#include "variadic_functions.h"

/**
 * print_strings - imprime des chaînes
 * @separator: chaîne à imprimer entre les chaînes
 * @n: nombre de chaînes passées à la fonction
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
char *strg;
va_list list;

va_start(list, n);
for (x = 0; x < n; x++)
{
strg = va_arg(list, char *);
if (!strg)
strg = "(nil)";
if (!separator)
printf("%s", strg);
else if (separator && x == 0)
printf("%s", strg);
else
printf("%s%s", separator, strg);
}
printf("\n");
va_end(list);
}
