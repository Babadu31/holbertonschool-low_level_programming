#include "function_pointers.h"

/**
 * print_name - imprime un nom
 * @name: chaine de caractère
 * @f: pointeur de fonction utilisant la chaine
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
