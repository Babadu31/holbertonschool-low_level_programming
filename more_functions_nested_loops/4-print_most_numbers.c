#include "main.h"

/**
 * print_most_numbers - imprimme les chiffres, de 0 à 9
 * excepté 2 et 4, suivie d'un retour à la ligne
 */

void print_most_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
