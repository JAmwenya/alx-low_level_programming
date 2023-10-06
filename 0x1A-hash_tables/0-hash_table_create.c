#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: NULL If memory is not5 allocated
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_new;
	unsigned long int i;

	/* allocate space for the hash table */
	hash_table_new = malloc(sizeof(hash_table_t));

	if (hash_table_new == NULL)
		return (NULL);

	hash_table_new->size = size;
	hash_table_new->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_new->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_table_new->array[i] = NULL;
	}

	return (hash_table_new);
}
