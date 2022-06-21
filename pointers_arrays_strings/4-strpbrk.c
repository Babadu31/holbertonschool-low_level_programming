#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - recherche dans une chaine l'un des ensembles d'octets
 * @s: chaîne à rechercher
 * @accept: chaîne contenant les octets à rechercher
 * Return: pointeur vers l'octet de s qui correspond à l'un des octets de accept 
 * ou NULL si aucun octet
 */

char *_strpbrk(char *s, char *accept)
{
int x, y;

for (x = 0; *s != '\0'; x++)
{
for (y = 0; accept[y] != '\0'; y++)
{
if (*s == accept[y])
{
return (s);
}
}
s++;
}
return (NULL);
}
