# include "main.h"

/**
 * _memset - remplit la mémoire avec un octet constant
 * @s: zone mémoire à remplir
 * @b: caractère à copier
 * @n: nombre de fois à copier b
 * Return: pointeur vers la zone mémoire s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
