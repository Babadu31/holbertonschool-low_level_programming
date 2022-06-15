#include "main.h"

/**
 * rev_string - inverse la chaine de caractère
 * @s: chaine de caractère à inverser
 */

void rev_string(char *s)
{
char tmp;
int i, x, y;

x = 0;
y = 0;

while (s[x] != '\0')
{
x++;
}

y = x - 1;

for (i = 0; i < x / 2; i++)
{
tmp = s[i];
s[i] = s[y];
s[y--] = tmp;
}
}
