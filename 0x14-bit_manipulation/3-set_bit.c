#include "main.h"
/**
 * set_bit - converts bit to 1
 * @n: stores the address of the number
 * @index: index
 * Return: num
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
