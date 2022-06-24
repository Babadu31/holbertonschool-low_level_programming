#include "main.h"
#include <stdio.h>

/**
 * *_strstr - localise une sous-chaîne
 * @haystack: chaîne à rechercher
 * @needle: sous-chaîne à rechercher
 * Return: pointeur vers le début de la sous-chaîne localisée
 * ou NULL si la sous-chaîne n'est pas trouvée
 */

char *_strstr(char *haystack, char *needle)
{

int x, z;
for (x = 0; haystack[x] != '\0'; x++)
{
for (z = 0; needle[z] != '\0'; z++)
{
if (haystack[x + z] != needle[z])
break;
}
if (!needle[z])
return (&haystack[x]);
}
return (NULL);
}
