#include "main.h"

/**
 * _strncat - les deux chaines mise bout à bout
 * @dest: chaine de caractère
 * @src: chaine de caractère
 * @n: nombre d'octets de str à ajouter
 * Return: un pointeur vers la chaîne résultante dest
 */

char *_strncat(char *dest, char *src, int n)
{
int x, y;
x = 0;
y = 0;

while (dest[x] != '\0')
x++;
while (src[y] != '\0' && y < n)
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';

return (dest);
}
