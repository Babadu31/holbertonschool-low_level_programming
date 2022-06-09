#include <unistd.h>

/**
 * _putchar - écrit le charactère c jusqu'a stdout
 * @c: le caractère à imprimer
 *
 * Return: si succés 1.
 * en erreur, -1 est retourné, et errno est placé correctement.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
