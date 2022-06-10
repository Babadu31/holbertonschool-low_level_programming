#include "main.h"

/**
 * print_sign - point d'entré
 * @n: intégreur
 *
 * Return: -1 si f est moins que 0, 0
 * si n est égale à 0, les autres cas retournent 1.
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('+');
return (1);
}
}
