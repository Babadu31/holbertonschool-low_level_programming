#include "main.h"

/**
 * *_strspn - obtient la longueur d'une sous-chaine de préfixe
 * @s: chaîne à évaluer
 * @accept: chaine contenant la listes des caractères à rechercher dans s
 * Return: le nombre d'octets dans le segment initial
 * de s qui ce composent uniquement de d'octets de accept
 */

unsigned int _strspn(char *s, char *accept)
{
int x, y, z, trap;
z = 0;

for (x = 0; s[x] != '\0'; x++)
{
trap = 0;
for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y])
{
z++;
trap = 1;
}
if (trap == 0)
{
return (z);
}
}
return (0);
}
