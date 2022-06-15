#include "main.h"
/**
 * puts_half - imprime la moitié de la chaine de caractère
 * @str: string to be printed
 */

void puts_half(char *str)
{

int x, y, z;
y = 0;

while (str[y] != '\0')
{
y++;
}
if (y % 2 == 0)
{
for (x = y / 2; str[x] != '\0'; x++)
{
_putchar(str[x]);
}
}
else if (y % 2)
{
for (z = (y - 1) / 2; z < y - 1; z++)
{
_putchar(str[z + 1]);
}
}
_putchar('\n');
}
