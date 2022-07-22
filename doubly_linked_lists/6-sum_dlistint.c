#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: head of the list
 * Return: result of the sum
 */
int sum_dlistint(dlistint_t *head)
{
int somme;
somme = 0;

if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;

while (head != NULL)
{
somme += head->n;
head = head->next;
}
}
return (somme);
}
