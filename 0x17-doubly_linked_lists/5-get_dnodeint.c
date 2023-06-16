#include "lists.h"
/**
* get_dnodeint_at_index - Returns the nth node of a linked list
* @head: Head pointer
* @index: Index
* Return: Pointer to the nth node, or NULL.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int counter = 0;

	while (tmp != NULL)
{
	if (counter == index)
		return (tmp);

	tmp = tmp->next;
	counter++;
}

return (NULL);
}
