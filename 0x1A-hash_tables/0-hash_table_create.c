#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: The size of the table
 * Return: A pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	unsigned int i;

	if (size > 0)
	{
		newtable = malloc(sizeof(hash_table_t));
		if (!newtable)
			return (NULL);
		newtable->size = size;
		newtable->array = malloc(sizeof(hash_node_t *) * size);
		if (!newtable->array)
		{
			free(newtable);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			newtable->array[i] = NULL;
		return (newtable);
	}
	return (NULL);
}
