#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at
 * the end of list.
 * @head: pointer to node
 * @n: integer value of node
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	/* Set the value of "next" pointer to NULL*/
	newNode->next = NULL;

	/* Set the temporary pointer to the head of the list*/
	tmp = *head;

	/* If empty, set the head pointer to point to the new node*/
	if (*head == NULL)
		*head = newNode;

	/* else, find last node,set "next" to the new node*/
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = newNode;
	}

	return (newNode);
}
