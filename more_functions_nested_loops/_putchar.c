#include "main.h"
#include <unistd.h>


/**
 * _putchar - écrit le caractère c sur stdout
 * @c: Le caractère à imprimer
 *
 * Return: En cas de succès 1.
 * En cas d'erreur, -1 est renvoyé et errno est défini de manière appropriée.
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}
