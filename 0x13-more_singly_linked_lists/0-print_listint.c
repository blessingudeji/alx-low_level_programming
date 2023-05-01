#include "lists.h"
/**
 * print_listint - this function prints the elment of listin_t
 * @h: pointer to new node
 * Return: Pointer to Node
 */
size_t print_listint(const listint_t *h)
{
	/*counter variable to keep track of the number of nodes in the list*/
	size_t count = 0;

	/* Traverse the linked list using a while loop*/
	while (h != NULL)
	{
		/*Print the integer value of the current node*/
		printf("%d\n", h->n);

		/* Move to the next node in the linked list*/
		h = h->next;

		/* Increment the counter to know the number of nodes visited*/
		count++;
	}

	/* Return the number of nodes in the linked list*/
	return (count);
}
