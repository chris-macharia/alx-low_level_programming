#include "main.h"

/**
 * swap_int - is a function that switches the memory address of 2 variabes
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
