#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int len = (len1 > len2) ? len1 : len2;
	int carry = 0;
	int sum;

	if (size_r <= len + 1)
	{
		return (0);
	}

	r[len + 1] = '\0';
	while (len1 > 0 || len2 > 0)
	{
		sum = carry;
		if (len1 > 0)
		{
			sum += n1[--len1] - '0';
		}
		if (len2 > 0)
		{
			sum += n2[--len2] - '0';
		}
		r[--len] = sum % 10 + '0';
		carry = sum / 10;
	}
	if (carry)
	{
		r[--len] = carry + '0';
	}
	else
	{
		++r;
	}
	return (r);
}

