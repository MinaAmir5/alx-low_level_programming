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
		_putchar('-');
		n = -n;
	}
	if (n > 1000)
	{
		_putchar((n / 1000) + '0');
		n = n % 1000;
		_putchar((n / 100) + '0');
		n = n % 100;
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 100)
	{
		_putchar((n / 100) + '0');
		n = n % 100;
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n % 10) + '0');
	}
}
