#include "main.h"
/**
 * _memset - will fill a block of memory with a specific value
 * @s: is the starting address of memory to be filled
 * @b: is the desired value
 * @n: represrents number of bytes to be changed
 *
 * Return: changed array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
