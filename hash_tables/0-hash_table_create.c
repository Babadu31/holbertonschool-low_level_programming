#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table, or NULL if
 * function fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
hash_node_t **array;
unsigned long int x;

table = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);

array = malloc(sizeof(hash_node_t *) * size);
if (array == NULL)
return (NULL);

for (x = 0; x < size; x++)
array[x] = NULL;

table->array = array;
table->size = size;

return (table);
}
