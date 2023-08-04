#include "main.h"

/**
 * set_bit - a bit sets at a given index to 1
 * @n: the number to change pointers
 * @index: index of the bit to set to 1
 *
 * Return: success 1, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

