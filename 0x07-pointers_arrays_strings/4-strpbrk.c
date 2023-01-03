#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strpbrk - Searches a string for a set of bytes
 * @s: pointer to string to search
 * @accept: pointer to bytes to search for
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}


