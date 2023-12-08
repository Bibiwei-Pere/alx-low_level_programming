#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a doubly linked list
 * @head: the head node
 * @index: the node index
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);
	temp = head;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	if (index < len)
	{
		while (index > 0)
		{
			head = head->next;
			index -= 1;
		}
		return (head);
	}
	return (NULL);
}

