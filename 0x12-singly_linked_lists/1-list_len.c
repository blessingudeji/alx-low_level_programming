#include "lists.h"
/**
 * list_len - returns then number of elements
 * @h: pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n_counter;

	n_counter = 0;
	while (h != NULL)
	{
		h = h->next;
		n_counter++;
	}
	return (n_counter);
}
