#include "main.h"

/**
 * set_bit - Modifies a bit at a specified index to be set to 1 in a given number.
 * @n: A pointer to the number to be manipulated.
 * @index: The index of the bit to set to 1.
 *
 * Return: 1 on success, or -1 on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
