#include "main.h"
	#include <stdlib.h>

/**
 * _strdup - renvoie un pointeur vers un espace
 * nouvellement alloué en mémoire
 * @str: chaîne de caractères
 * Return: pointeur d'un tableau de caractères
 */

char *_strdup(char *str)
{
char *strout;
unsigned int x, z;

if (str == NULL)
return (NULL);

for (x = 0; str[x] != '\0'; x++);

strout = (char *)malloc(sizeof(char) * (x + 1));

if (strout == NULL)
return (NULL);

for (z = 0; z <= x; z++)
strout[z] = str[z];

return (strout);
}
