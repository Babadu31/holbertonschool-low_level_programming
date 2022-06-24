
#include "main.h"

/**
 * _strcmp - compare deux chaînes
 * @s1: première chaîne à comparer
 * @s2: deuxième chaîne à comparer
 * Return: résultat comparaison
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
