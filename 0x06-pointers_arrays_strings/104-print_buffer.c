#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */

void print_buffer(char *b, int size)
{
    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (int i = 0; i < size; i++)
    {
        if (i % 10 == 0)
        {
            printf("%08x: ", i);
        }
        printf("%02x ", b[i]);
        if (i % 10 == 9 || i == size - 1)
        {
            for (int j = i - (i % 10); j <= i; j++)
            {
                if (b[j] >= 32 && b[j] <= 126)
                {
                    printf("%c", b[j]);
                }
                else
                {
                    printf(".");
                }
            }
            printf("\n");
        }
    }
}

