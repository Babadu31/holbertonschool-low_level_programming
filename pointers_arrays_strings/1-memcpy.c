#include "main.h"

/**
 * _memcpy - copie n octets de la zone mémoire src
 * vers zone mémoire dest
 * @dest: zone mémoire destination
 * @src: zone mémoire source
 * @n: la fonction copie n octets
 * Return: Renvoie un pointeur vers dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
