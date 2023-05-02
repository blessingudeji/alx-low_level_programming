#include "lists.h"
/**
 * free_listint2 - a function frees a list
 * @head: linked list and head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	/* Check if head pointer is NULL, and return if it is*/
	if (head == NULL)
		return;

	/* Free each node in linked list */
	while (*head != NULL)
	{
		tmp = *head;
		free(*head);
		*head = tmp->next;
	}

	/* Set the value of the head pointer to NULL*/
	*head = NULL;
}
