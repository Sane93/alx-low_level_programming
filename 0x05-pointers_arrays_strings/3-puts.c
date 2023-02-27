#include "main.h"
/**
 * _puts-a function that prints a string, followed by a new line
 * @str: string to be printed
 * Return: ALways 0
 */
void _puts(char *str)
{
	if (str == NULL)
		return;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
