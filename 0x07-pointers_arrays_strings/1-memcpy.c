#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: area where memory will be stored
 *@src: area where memory will be copied
 *@n: is number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
