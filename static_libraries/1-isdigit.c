#include "main.h"

/**
 * _isdigit - recherche un chiffre (0 à 9)
 * @c: variable à vérifier
 * Return: 1 si c est un chiffre, 0 sinon
 */

int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
