 #include <stdio.h>

/**
 * main - point d'entré
 * @argc: arguments
 * @argv: tableau pointant vers des arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int x = 0;

while (x < argc)
{
printf("%s\n", argv[x]);
x++;
}
return (0);
}
