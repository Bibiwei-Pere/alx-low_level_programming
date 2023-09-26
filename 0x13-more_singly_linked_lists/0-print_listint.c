#include "lists.h"

/**
 * print_listint - funtion to print all elements of a linked list
 * @h: linked list
 * Return: num
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
