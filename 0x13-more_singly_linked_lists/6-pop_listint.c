#include "lists.h"
/**
 * pop_listint - a function deletes the head node of the list
 * @head: head pointer
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int headNode;/*variable to hold the head node data*/
	listint_t *tmp;/*temporary node pointer*/
	listint_t *curr;/*current node pointer*/

	if (*head == NULL)

		/*return 0 as there is nothing to pop*/
		return (0);

	curr = *head;

	headNode = curr->n;

	tmp = curr->next;

	free(curr);

	*head = tmp;

	return (headNode);/*return the head node data*/
}
