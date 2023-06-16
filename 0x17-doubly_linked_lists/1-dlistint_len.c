#include "lists.h"
/**
 * dlistint_len - returns the number of element in linked list
 * @h: head
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
