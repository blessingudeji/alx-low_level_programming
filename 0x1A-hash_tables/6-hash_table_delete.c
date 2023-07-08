#include "hash_tables.h"
/**
 * hash_table_delete - A function that deletes a hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while ((next = curr) != NULL)
		{
			curr = curr->next;
			free(next->key);
			free(next->value);
			free(next);
		}
	}
	free(ht->array);
	free(ht);
}
