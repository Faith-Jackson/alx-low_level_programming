#include "lists.h"
/**
 * sum_dlistint - To calculate the sum of data in a doubly linked list
 * @head: Pointer to the first node on the doubly linked list
 * Return: Always an integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	dlistint_t *temp;

	sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;

		temp = temp->next;

	}
	return (sum);
}
