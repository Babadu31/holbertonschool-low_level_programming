#include "main.h"

/**
 * _strcat - les deux chaines mise bout à bout
 * @dest: chaine de caractère
 * @src: chaine de caractère
 * Return: un pointeur vers la chaîne résultante
 */

char *_strcat(char *dest, char *src)
{
int x, y;

x = 0;
y = 0;

while (dest[x] != '\0')
x++;

while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}

dest[x] = '\0';

return (dest);
}
