#include "main.h"
#include <stdio.h>
/**
 * _memset- function fills the first n bytes of the memory area
 * @s: pointer to char
 * @b: second char pointer
 * @n: unsigned int
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
