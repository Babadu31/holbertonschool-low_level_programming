#include "main.h"

/**
 * _isalpha - Vérifier main
 * @c: un caractère d'entré
 * Description: la fonction retourne 1 si le caractère
 * est une lettre minuscule ou majuscule
 * Return: 1 ou 0 dans le cas contraire.
 */
int _isalpha(int c)
{
char lower, upper;
int isletter = 0;

for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
isletter = 1;
}
}
return (isletter);
}
