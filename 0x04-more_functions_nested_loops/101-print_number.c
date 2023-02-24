#include "main.h"
/**
 * print_number-  function that prints an integer
 * @n: integer to be printed
 * Return: Always 0
 */
void print_number(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/* Handle the case where n is a single digit */
	if (n / 10 == 0)
	{
		_putchar(n % 10 + '0');
		return;
	}
	/* Recursively print the digits of n */
	print_number(n / 10);
	_putchar(n % 10 + '0');
}
