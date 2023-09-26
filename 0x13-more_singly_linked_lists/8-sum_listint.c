#include "lists.h"
/**
 * sum_listint - sum of all data in a link list
 * @head: beginning node
 * Return: num
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
