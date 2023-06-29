#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n > 1000)
	{
		putchar((n / 1000) + '0');
		n = n % 1000;
		putchar((n / 100) + '0');
		n = n % 100;
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
	}
	else if (n > 100)
	{
		putchar((n / 100) + '0');
		n = n % 100;
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
	}
	else if (n > 10)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
	}
	else
	{
		putchar((n % 10) + '0');
	}
}
