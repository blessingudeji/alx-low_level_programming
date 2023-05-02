#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the index
 * @head: head of a list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *tmp;
	listint_t *curr;

	tmp = *head;

	/*Traverse the linked list to find the node at the given index*/
	if (index != 0)
	{
		for (count = 0; count < index - 1 && tmp != NULL; count++)
		{
			tmp = tmp->next;
		}
	}

	/* Check if the given index is valid*/
	if (tmp == NULL || (tmp->next == NULL && index != 0))
	{
		return (-1);
	}

	curr = tmp->next;

	/*Remove node from the linked list*/
	if (index != 0)
	{
		tmp->next = curr->next;
		free(curr);
	}
	else
	{
		free(tmp);
		*head = curr;
	}

	return (1);
}
