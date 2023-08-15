#include "main.h"
/*
 * int _isalpha(int c) - checks for alphabets
 * @c: is a function parameter
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
