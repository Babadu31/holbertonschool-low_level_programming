#include "main.h"

/**
 * string_toupper - change toutes les lettres minuscules d'une chaîne
 * en majuscule
 * @s: chaîne à modifier
 * Return: résultat
 */

char *string_toupper(char *s)
{
int x;

for (x = 0; s[x] != '\0'; x++)
{
if (s[x] >= 'a' && s[x] <= 'z')
s[x] = s[x] - 32;
}
return (s);
}
