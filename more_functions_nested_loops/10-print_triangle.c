#include "main.h"

/**
 * print_triangle - point d'entré
 * @size: int
 * la taille est 0 ou moins,
 */

void print_triangle(int size)
{

int x;
int y;

if (size < 1)
{
_putchar('\n');
}
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
if (y <= size - x)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
