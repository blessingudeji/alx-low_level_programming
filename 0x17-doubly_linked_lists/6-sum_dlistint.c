#include "lists.h"
/**
 * sum_dlistint - sums up data of the linked list
 * @head: head pointer
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
