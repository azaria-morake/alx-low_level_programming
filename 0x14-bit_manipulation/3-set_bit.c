#include "main.h"

/**
 * set_bit - sets a bit at a given index to only 1
 * @n: is the pointer to the number to manipulate
 * @index: index of the bit to set to 1
 *
 * Return: will return either 1 for success or -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
