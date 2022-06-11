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
int t;

for (s = '0'; s <= '9'; s++)
{
for (b = s + 1; b <= '9'; b++)
{
for (t = b + 1; t <= '9'; t++)
{
putchar(s);
putchar(b);
putchar(t);
if (s < '7')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
