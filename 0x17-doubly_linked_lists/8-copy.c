#include "lists.h"

/**
 * delete_neg_val - loop and delete node with negative value
 * @head: the head node
 *
 * Return: modified doubly linked list
 */
dlistint_t *delete_neg_val(dlistint_t **head)
{
	dlistint_t *del, *hold;

	del = *head;

	while (del != NULL)
	{
		if (del->n < 0)
		{
			hold = del;
			hold->next->prev = hold->prev;
			hold->prev->next = hold->next;
			free(hold);
		}
		del = del->next;
	}
	return (*head);
}
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: the head node
 * @index: the node index to delete
 *
 * Return: 1 if succeded else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len = 0;
	dlistint_t *temp, *current, *hold;

	temp = *head, current = *head;
	/*delete_neg_val(head);*/
	if (head == NULL || *head == NULL)
		return (-1);
	/* get the length of linked list */
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	if (index >= len)
		return (-1);
	/* if first node is to be deleted */
	else if (index == 0)
	{
		hold = *head;
		(*head) = (*head)->next;
		free(hold);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	else if (index > 0)
	{
		while (index > 1)
		{
			current = current->next;
			index -= 1;
		}
		hold = current->next;
		current->next = hold->next;
		hold->next->prev = current;
		free(hold);
		return (1);
	}
	else
		return (-1);
}

