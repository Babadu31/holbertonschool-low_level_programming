#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer for the list
 * @n: data to insert
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *temp = *head;

if (!head)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;
temp->next = new;
new->prev = temp;

return (new);
}
