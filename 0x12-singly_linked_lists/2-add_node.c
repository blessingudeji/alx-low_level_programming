#include "lists.h"
/**
 * add_node - adds a new node to a list
 * @head: first node
 * @str: string
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int index = 0;

	while (str[index])
		index++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = index;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
