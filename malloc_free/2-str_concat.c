#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - créer un train à deux wagons
 * @s1: premier wagons
 * @s2: deuxième wagons
 * Return: train de s1 et s2
 */

char *str_concat(char *s1, char *s2)
{
int ls1, ls2, x = 0;
char *array;

if (s1 == NULL || s2 == NULL)
s1 = s2 = "";

for (ls1 = 0; ls1 <= *s1; ls1++)
{
}

for (ls2 = 0; ls2 <= *s2; ls2++)
{
}

array = malloc(sizeof(char) * (ls1 + ls2 + 1));

if (array == NULL)
return (NULL);

while (*s1)
{
array[x] = *s1;
x++;
s1++;
}

while (*s2)
{
array[x] = *s2;
x++;
s2++;
}

return (array);
}
