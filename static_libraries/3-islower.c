#include "main.h"

/**
 * _islower - verifier main
 * @c: caractère d'entrée
 * Description: la fonction utilise _putchar fonction pour imprimer
 * alphabet en minuscule imprimer 10 fois
 * Return: 1 si c'est en minuscule et 0 si c'est en majusculle
 */
int _islower(int c)
{
char i;
int lower = 0;

for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}
return (lower);
}
