#include "lists.h"
/**
 * free_listint - function to free a linked list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
