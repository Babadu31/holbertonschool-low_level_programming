#include "main.h"
/**
 * _strlen_recursion - renvoie la longueur d'une chaîne
 * @s: chaine à calculer la longueur
 * Return: taille de la chaine
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
