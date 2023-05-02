#include "lists.h"
/**
 * free_listint2 - a function frees a list
 * @head: linked list and head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *curr;

	if (head == NULL)
		return;

	/* check if head is not null*/
	if (*head != NULL)

		/* initialize the current node to head*/
	{
		curr = *head;
		while ((tmp = curr) != NULL)/* loop through the linked list*/
		{
			curr = curr->next;
			free(tmp);
		}

	/* Set the value of the head pointer to NULL*/
	*head = NULL;
	}
}
