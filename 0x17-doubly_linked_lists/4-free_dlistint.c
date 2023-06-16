#include "lists.h"
/**
 * free_dlistint - frees linked list
 * @head: head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}
}
