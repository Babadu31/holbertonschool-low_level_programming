#include "main.h"

/**
 * _strlen - retourne la longueur de la chaine de caractère
 * @s: chaine de caractère à évaluer
 *
 * Return: la taille de la chaine de caractère
 */

int _strlen(char *s)
{
int i;

i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);
}

