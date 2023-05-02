#include "lists.h"
/**
 * insert_nodeint_at_index -a func that inserts node at index
 * @head: linked list
 * @idx: index of the list
 * @n: value of head
 * Return: address of node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;/*declare and initialize counter to 0*/
	listint_t *tmp;
	listint_t *newNode;

	if (head == NULL)
		return (NULL);

	tmp = *head;

	/* loop through list until the end or until index - 1*/
	while (tmp != NULL && count != idx - 1)
	{
		tmp = tmp->next;
		count++;
	}

	/* check if the index is out of range*/
	if (count != idx - 1 && idx != 0)
		return (NULL);

	/*allocate memory for the new node,check if it failed*/
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx != 0)
	{
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}

	/*return the address of the new node*/
	return (newNode);
}
