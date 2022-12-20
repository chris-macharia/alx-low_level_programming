#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
	char *string =  str;
	/*Get the length of the string*/
	int length = 0;

	while (string[length] != '\0')
		length++;
	/*Print the second half of the string if the length is even*/
	if (length % 2 == 0)
	{
		for (int i = length / 2; i < length; i++)
			_putchar(string[i]);
	}
	/*Print the last n characters of the string if the length is odd*/
	else
	{
		int n = (length - 1) / 2;

		for (int i = length - n; i < length; i++)
			_putchar(string[i]);
	}
	_putchar('\n');
}
