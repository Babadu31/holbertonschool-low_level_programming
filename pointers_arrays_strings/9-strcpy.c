#include "main.h"

/**
 * *_strcpy - copie la chaîne pointée par src avec l'octet nul de fin (\0)
 * to the buffer pointed to by dest
 * @dest: pointeur vers le tampon
 * @src: chaîne à copier
 * Return: le pointeur vers dest
 */

char *_strcpy(char *dest, char *src)
{
int x, y;
x = 0;

while (src[x] != '\0')
{
x++;
}
for (y = 0; y < x; y++)
{
dest[y] = src[y];
}
dest[y] = '\0';

return (dest);
}
