#include "lists.h"
/**
 * add_dnodeint - To add a new node at the beginning of a dlistint_t list.
 * @n: Data of the new node to be added
 * @head: Pointer to the first node in the list
 * Return: Address of the new node (pointer of type dlistint_t)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (*head);
}
