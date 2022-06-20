#include "main.h"
#include <stdio.h>

/**
 * *_strchr - localise un caractère dans une chaîne
 * @s: chaîne à rechercher
 * @c: char à trouver
 * Return: un pointeur vers la première occurrence du caractère
 * c dans la chaîne s, ou NULL si le caractère n'est pas trouvé
*/

char *_strchr(char *s, char c)
{
int x;

while (1)
{
x = *s++;
if (x == c)
{
return (s - 1);
}
if (x == 0)
{
return (NULL);
}
}
}
