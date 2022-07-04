#include "3-calc.h"

/**
 * get_op_func - fonction qui sélectionne la fonction correcte pour
 * effectuer l'opération demandée par l'utilisateur
 * @s: argument de l'opérateur
 * Return: pointeur de fonction correspondant à l'opérateur
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;
while (i < 5)
{
if (ops[i].op[0] == s[0])
return
(ops[i].f);
i++;
}
return (NULL);
}
