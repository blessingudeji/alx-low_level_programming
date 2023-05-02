#include "lists.h"
/**
 * free_listint - a function that frees a linked list
 * @head: head of a list.
 * Return: void.
 */
void free_listint(listint_t *head)
{

	/* Declare a pointer to a listint_t node to be freed*/
	listint_t *tmp;

	/* set the "tmp" pointer to the current head node*/
	while ((tmp = head) != NULL)
	{

		/*move the head pointer to the next node, and free the "tmp" pointer*/
		head = head->next;
		free(tmp);
	}
}
