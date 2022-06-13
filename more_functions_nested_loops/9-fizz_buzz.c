#include "main.h"
#include <stdio.h>

/**
 * main - imprime les nombres de 1 à 100, suivis d'une nouvelle ligne
 * mais pour les multiples de trois tirages Fizz au lieu du nombre
 * and for the multiples of five prints Buzz
 * Return: toujours 0 (succés)
 */

int main(void)
{
int x;

for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 5 != 0)
{
printf(" Fizz");
}
else if (x % 5 == 0 && x % 3 != 0)
{
printf(" Buzz");
}
else if (x % 3 == 0 && x % 5 == 0)
{  
printf(" FizzBuzz");
}
else if (x == 1)
{
printf("%d", x);
}
else
{
printf(" %d", x);
}
}
printf("\n");
return (0);
}
