#include "lists.h"
/**
 * dlistint_len - To return the number of elements in a linked dlistint_t list.
 * @h: Pointer to the first node
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i;

	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (i);
}
