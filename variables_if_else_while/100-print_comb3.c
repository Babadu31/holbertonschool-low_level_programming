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

for (s = '0'; s <= '9'; s++)
{
for (b = s + 1; b <= '9'; b++)
{
putchar(s);
putchar(b);
if (s < '8')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
