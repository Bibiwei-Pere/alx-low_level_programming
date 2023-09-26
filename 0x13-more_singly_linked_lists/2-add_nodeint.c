#include "lists.h"
/**
 * add_nodeint - new node is added before the first node
 * @head: stores address of the first node
 * @n: new data am inserting
 * Return: num
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
