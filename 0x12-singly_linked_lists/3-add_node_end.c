#include "lists.h"
/**
 * add_node_end - adds node at end
 * @head: first node
 * @str: string
 * Return: the address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int index = 0;
	list_t *newNode, *last;

	while (str[index])
		index++;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = index;
	newNode->next = NULL;
	if (strdup(str) == NULL)
	{
		free(newNode);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
		return (newNode);
	}
}
