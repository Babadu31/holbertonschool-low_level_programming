#include <stdio.h>

/**
 * main - affiche le nom du fichier à partir duquel il a été compilé
 * followed by a new line
 * Return: 0;
 */

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
