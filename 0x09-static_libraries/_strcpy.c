#include "main.h"
#include <stdio.h>
/**
 * _strcpy- function copy string from the source string
 * @dest: string to be copied
 * @src: string that copies
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
