#include "lists.h"
/**
 * print_dlistint - print all element of the list
 * @h: head
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t a = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		a++;
	}
	return (a);
}
