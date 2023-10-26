#include "main.h"

/**
 * clear_bit - Resets the value of a specified bit to 0 in a given number.
 * @n: A pointer to the number to be modified.
 * @index: The index of the bit to clear.
 *
 * Return: 1 on success, or -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
