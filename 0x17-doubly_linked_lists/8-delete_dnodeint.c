#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: Pointer
 * @index: Index of the node
 * Return: 1 if it succeeded, or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *tmp;
	unsigned int a;

	if (*head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}

	for (a = 0; a < index; a++)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
	}

	tmp = curr;
	curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	free(tmp);

	return (1);
}
