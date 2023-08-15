#include "main.h"

/**
 * _islower - check if the type char is lowercase
 * @c: is char type to be checked
 * Return: 1 if char us lowercase, otherwise 0.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
