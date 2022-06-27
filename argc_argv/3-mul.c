#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux chiffres
 * @argc: nombres d'arguments passé dans la fonction
 * @argv: argument vecteur du pointeur
 * Return: 0 si pas d'erreurs, 1 pour le reste
 */

int main(int argc, char *argv[])
{
int a, b, c;

if (argc != 3)
{
puts("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a *b;
printf("%d\n", c);
return (0);
}
