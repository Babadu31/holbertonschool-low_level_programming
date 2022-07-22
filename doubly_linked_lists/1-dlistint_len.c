#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t node = 0;

while (h)
{
if (!h)
return (0);

else
{
node++;
h = h->next;
}
}
return (node);
}
