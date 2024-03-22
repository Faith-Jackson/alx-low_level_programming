#include "lists.h"

/**
 * get_dnodeint_at_index - To get the nth node of a doubly linked list.
 * @head: Pointer to the first node in the list.
 * @index: Index of the node of interest.
 * Return: Pointer to the address of the node gotten
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (i == index)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
