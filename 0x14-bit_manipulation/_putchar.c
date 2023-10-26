#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes a single character to the standard output.
 * @c: The character to be displayed.
 *
 * Return: On success 1.
 * On failure, it returns -1, and sets the appropriate error code in errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
