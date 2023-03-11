#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat- function to cocatenate plus length
 * @dest: pointer to copy to
 * @src: string to concatenate
 * @n: length of the string
 * Return: string and length
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
