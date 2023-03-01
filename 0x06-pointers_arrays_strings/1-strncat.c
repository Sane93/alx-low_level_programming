#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: first pointer string
 * @src: second pointer string
 * @n: int to be checked
 * Return: pointer string to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
		dest++;

	while (n-- > 0 && *src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (dest_start);
}
