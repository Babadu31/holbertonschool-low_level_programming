#include <stdio.h>
#include <unistd.h>

/**
 * main - point d'entrée
 *
 * Return: toujours 1 (succés)
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
