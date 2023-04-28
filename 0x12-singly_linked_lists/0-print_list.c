#include "lists.h"

/**
 * print_list - prints elements of a list.
 * @h: pointer
 * Return: Elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t n_counter;

	n_counter = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n_counter++;
	}
	return (n_counter);
}
