#include "hash_tables.h"
/**
 * hash_table_print -A function that prints a hash table
 * @ht: The hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			printf("%s'%s': '%s'", sep, curr->key, curr->value);
			sep = ", ";
			curr = curr->next;
		}
	}
	printf("}\n");
}
