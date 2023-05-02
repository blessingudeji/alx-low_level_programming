#include "lists.h"
/**
 * add_nodeint - a function that adds new node at the
 * beginning of list
 * @head: pointer to new node
 * @n: integer value
 * Return: the address to new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declare a new pointer*/
	listint_t *newNode;

	/*Allocate memory for new node and check if it's successful*/
	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	/* Set the value of the new node to the integer value n*/
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	/*Return a pointer to the new head node of the linked list*/
	return (*head);
}
