#include "hash_tables.h"
/**
 * hash_table_get- Retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: Key
 * Return: Value associated with element, otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *curr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((unsigned	char *)key, ht->size);
	curr = ht->array[i];

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
