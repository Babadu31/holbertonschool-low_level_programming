 #include <stdio.h>

/**
 * main - point d'entrée
 * @argc: Arguments
 * @argv: tableau pointant vers des arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
int x;
for (x = 0; x < argc; x++)
{
}
printf("%d\n", x - 1);
return (0);
}
