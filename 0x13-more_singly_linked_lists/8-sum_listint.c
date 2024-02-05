#include "lists.h"
#include <stdlib.h>
/**
  * sum_listint - sum of all the data (n) of a listint_t linked lists
  * @head: - pointer to the first node
  * Return: sum of all the data
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
