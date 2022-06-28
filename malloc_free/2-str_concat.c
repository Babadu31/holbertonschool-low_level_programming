#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - créer un train à deux wagons
 * @s1: premier wagons
 * @s2: deuxième wagons
 * Return: train des deux wagons s1 et s2
 */

char *str_concat(char *s1, char *s2)
{
int x, z;
int ls1;
int ls2;
char *rslt;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (s1 == NULL && s2 == NULL)
{
s1 = "";
s2 = "";
}
ls1 = strlen(s1);
ls2 = strlen(s2);
rslt = malloc(sizeof(char) * (ls1 + ls2) +1);
if (rslt == NULL)
{
return (NULL);
}
for (x = 0; s1[x]; x++)
{
rslt[x] = s1[x];
}
for (z = 0; s2[z]; z++)
{
rslt[x] = s2[z];
x++;
}
rslt[x] = '\0';
return (rslt);
}
