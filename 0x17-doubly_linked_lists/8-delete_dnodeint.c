#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the first node of the list
 * @index: postion where the node would be deleted
 * Return: always an integer
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_ptr, *temp;

	current_ptr = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_ptr);
		return (1);
	}

	while (current_ptr != NULL)
	{
		if (index == 0)
		{
			temp = current_ptr;

			current_ptr->prev->next = current_ptr->next;

			if (current_ptr->next != NULL)

				current_ptr->next->prev = current_ptr->prev;

			free(temp);

			return (1);
		}

		current_ptr = current_ptr->next;

		index--;
	}

	return (-1);
}
