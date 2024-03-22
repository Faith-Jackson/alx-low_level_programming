#include "lists.h"
/**
 * free_dlistint - To free a doubly linked list.
 * @head: A pointer to the first node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;

		head = head->next;

		free(temp);
	}
}
