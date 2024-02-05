#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one, *two;

	one = two = head;
	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		{
			one = head;
			break;
		}
	}
	if (!one || !two || !two->next)
		return (NULL);
	while (one != two)
	{
		one = one->next;
		two = two->next;
	}
	return (two);
}
