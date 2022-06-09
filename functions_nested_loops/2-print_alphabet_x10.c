#include "main.h"

/**
 * print_alphabet_x10 - vérifier main.h
 * Descripton: la fonction utilise _putchar fonction pour imprimer
 * Alphabet en minuscule 10 fois
 * Return: rien.
 */

void print_alphabet_x10(void)
{
char i;
int j;

for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
