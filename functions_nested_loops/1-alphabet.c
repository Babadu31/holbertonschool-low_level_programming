#include "holberton.h"

/**
 *
 * print_alphabet - vérifier la description
 * Description: imprimer l'alphabet en minuscule et suivi d'un saut à la ligne
 * Return: rien.
 */
void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z' ; i++)
_putchar(i);
_putchar('\n');
}
