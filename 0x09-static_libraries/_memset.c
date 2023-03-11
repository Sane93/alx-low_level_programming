#include "main.h"
#include <stdio.h>
/**
 * _memset- function that sets a block of memory in the specified string
 * @s: pointer to set memory
 * @b: specified value
 * @n: string length
 * Return: original string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
