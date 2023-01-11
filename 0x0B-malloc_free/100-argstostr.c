#include "main.h"
#include  <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	int total_length = 0;

	for (int i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	char *result = malloc(total_length + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	int current_pos = 0;

	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
		{
			result[current_pos++] = av[i][j];
		}
		result[current_pos++] = '\n';
	}

	result[current_pos] = '\0';
	return (result);
}

