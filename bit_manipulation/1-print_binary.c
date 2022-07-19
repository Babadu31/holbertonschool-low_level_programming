#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int x, compteur = 0;
unsigned long int courant;

for (x = 63; x >= 0; x--)
{
courant = n >> x;

if (courant & 1)
{
_putchar('1');
compteur++;
}

else if (compteur)
_putchar('0');
}
if (!compteur)
_putchar('0');
}
