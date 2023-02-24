#include "main.h"
#include <stdio.h>
/**
 * print_line- nction that draws a straight line in the terminal
 * @n:char to check
 * Return: always 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
	{
		putchar('_');
	}
	_putchar('\n');
}
