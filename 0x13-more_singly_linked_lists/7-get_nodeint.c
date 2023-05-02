#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the nth node.
 * @head: head pointer.
 * @index: index of the node.
 * Return: nth node.
 * If no node, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;/*declare a counter*/

	/*loop through the linked list until the index is reached*/
	for (count = 0; count < index && head != NULL; count++)
	{
		head = head->next;
	}

	return (head);/*return the nth node or NULL if not found*/
}
