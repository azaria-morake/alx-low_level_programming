#include "main.h"

/**
 * _isalpha - Checks for alphabetic order
 *
 * @c: alpabet to check for
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
