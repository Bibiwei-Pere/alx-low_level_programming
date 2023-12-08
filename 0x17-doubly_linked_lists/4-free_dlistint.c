#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: the head of doubly linked list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *bin;


	while (head != NULL)
	{
		bin = head;
		head = head->next;
		free(bin);
	}
}

