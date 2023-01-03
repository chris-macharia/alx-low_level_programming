#include "main.h"

/**
 * _memset - sets the memory value to a given byte
 * @s: pointer to buffer
 * @b: data to change to in the buffer
 * @n: number of elements whose values should be changed`
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
