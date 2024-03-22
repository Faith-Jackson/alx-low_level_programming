#include "lists.h"

/**
 * print_dlistint - To print all the elements of a dlistint_t list.
 * @h: Pointer to the first node.
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *temp = h;

	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
