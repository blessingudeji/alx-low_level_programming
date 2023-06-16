#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Head pointer
 * @idx: Index
 * @n: integer data
 * Return: Address of the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *tmp;
	unsigned int a;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;

	for (a = 0; a < idx - 1; a++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (NULL);

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = tmp->next;
	newnode->prev = tmp;
	tmp->next->prev = newnode;
	tmp->next = newnode;

	return (newnode);
}
