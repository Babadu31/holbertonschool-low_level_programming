#include "main.h"

/**
 * print_numbers - imprime les nombres, de 0 à 9
 * suivie d'une nouvelle ligne
 */

void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
