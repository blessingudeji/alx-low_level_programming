#include "lists.h"

/**
 * sum_listint - a function that returns the sum of data(n)
 * @head: head pointer
 * Return: sum of data (n) or 0
 */
int sum_listint(listint_t *head)
{
	int sum;/*declare a variable to hold the sum*/

	sum = 0;
	while (head != NULL)/*loop through the linked list*/
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);/* return the total sum*/
}
