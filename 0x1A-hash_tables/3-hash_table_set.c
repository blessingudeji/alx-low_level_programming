#include "hash_tables.h"
/**
* hash_table_set- This function adds element to the hash
* table.
* @ht:hash table to be modified
* @key: The key
* @value: Value associated with the key
* Return: 1 if succeeded, otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *newEntry = NULL;
	hash_node_t *curr = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	curr = ht->array[i];

	while (curr && strcmp(curr->key, key) != 0)
		curr = curr->next;

	if (curr)
	{
		free(curr->value);
		curr->value = strdup(value);
		return (1);
	}


	newEntry = malloc(sizeof(*newEntry));
	if (newEntry == false)
		return (0);

	newEntry->key = strdup(key);
	newEntry->value = strdup(value);

	newEntry->next = ht->array[i];
	ht->array[i] = newEntry;

	return (1);
}
