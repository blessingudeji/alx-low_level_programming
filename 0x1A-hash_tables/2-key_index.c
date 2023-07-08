#include "hash_tables.h"
/**
 * key_index - A function that gives you the index of a key.
 * @key: The key
 * @size: The size of the array of hash the table
 * Return: Index of how key should be stored in
 * the array of hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
