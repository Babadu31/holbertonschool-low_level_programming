#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the list
 * @index: index of the node to return
 * Return: address of the node, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x = 0;

if (!head)
return (NULL);

while (head && x < index)
{
head = head->next;
x++;
}

return (head ? head : NULL);
}
