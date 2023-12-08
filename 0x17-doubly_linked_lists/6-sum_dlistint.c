#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data(n) of a
 * doubly linked list
 * @head: the head node
 *
 * Return: the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

