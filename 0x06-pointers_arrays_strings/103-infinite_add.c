#include "main.h"
#include <stdio.h>

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
	int i, rem = 0;
	for (i = 0; i < size_r; i++)
	{
		rem = (n1[i] - '0') + (n2[i] - '0') + rem;
		if (rem > 9)
		{
			r[i] = rem % 10;
			rem = 1;
		}
		else
		{
			rem = 0;
		}
	}
	return (r);
}
