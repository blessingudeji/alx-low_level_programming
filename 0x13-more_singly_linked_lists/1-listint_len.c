#include "lists.h"
/**
 * listint_len - a function that prints number of the element
 * @h: pointer to new node
 * Return: Pointer to node
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/* Incrementing counter first*/
		count++;

		/*Before Moving to the next node in the linked list*/
		h = h->next;
	}
	return (count);
}
