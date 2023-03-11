#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy- copy string and count length
 * @dest: ponter to copy to
 * @src: string to copy
 * @n: count length
 * Return: dest and string length
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
