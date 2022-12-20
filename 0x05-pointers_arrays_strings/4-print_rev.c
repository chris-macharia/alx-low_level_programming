#include "main.h"

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	/*Get a pointer to the provided string*/
	char *string = s;
	/*Get the length of the string*/
	int length = 0;

	while (string[length] != '\0')
	{
		length++;
	}
	/* Print the string in reverse order*/
	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
}
