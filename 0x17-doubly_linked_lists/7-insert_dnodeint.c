#include "lists.h"

/**
 * insert_node - insert node at given index
 * @temp: ptr to nth position node in doubly linked list
 * @n: node data
 * Return: address of inserted node
 */
dlistint_t *insert_node(dlistint_t *temp, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	new->next = temp;
	new->prev = temp->prev;
	temp->prev->next = new;
	temp->prev = new;

	return (new);
}

/**
 * insert_dnodeint_at_index - create and insert node at nth index
 * @h: pointer to head of list
 * @idx: index
 * @n: node data
 * Return: address of inserted node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;

	if (!h)
		return (NULL);
	/* insert at beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* insert in the middle of list */
	temp = *h;
	while ((idx != 0) && (temp->next))
	{
		idx -= 1;
		temp = temp->next;
		if (idx == 0)
			return (insert_node(temp, n));
	}

	/* insert at the end of list if idx is one after last node */
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}

