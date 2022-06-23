#include "main.h"

/**
 * _print_rev_recursion - imprime une chaîne à l'envers
 * @s: chaine
 * Return: pas de retour
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
