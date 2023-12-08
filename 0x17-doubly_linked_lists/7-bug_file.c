#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head node
 * @idx: the index
 * @n: the new node data
 *
 * Return: the address of the new node or NUll if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0;
	dlistint_t *temp, *current, *new;

	temp = *h, current = *h;

	/* get the length of the doubly linked list*/
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	/* if node is to be added at index 0(first position) */
	if (idx == 0)
		add_dnodeint(h, n);
	/* if in the middle */
	else if (idx > 0 && idx < len)
	{
		while (current->next != NULL)
		{
			idx -= 1;
			current = current->next;
			if (idx == 0)
			{
				new->next = current;
				new->prev = current->prev;
				current->prev->next = new;
				current->prev = new;
				return (new);
			}
		}
	}
	/* if last index */
	else if (idx == len)
		add_dnodeint_end(h, n);
	return (NULL);
}

