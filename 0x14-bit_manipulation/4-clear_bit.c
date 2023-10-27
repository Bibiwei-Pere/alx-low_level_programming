#include "main.h"
/**
 * clear_bit - delete bit
 * @n: stores the address of the num
 * @index: index
 * Return: num
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

