#include "main.h"
#include <stdio.h>
/**
 * _puts- prints string to stdout
 * @s: string to be printed
 * Return: Always 0
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
