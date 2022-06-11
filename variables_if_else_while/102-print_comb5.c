#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - point d'entrée
 *
 * Return: toujours 0 (succés)
 */

int main(void)
{
int s;
int b;

for (s = 0; s <= 98; s++)
{
for (b = s + 1; b <= 99; b++)
{
putchar((s / 10) + '0');
putchar((s % 10) + '0');
putchar(' ');
putchar((b / 10) + '0');
putchar((b % 10) + '0');
if (s == 98)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
