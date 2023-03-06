#include "main.h"
#include <stdio.h>
/**
 * _memcpy- function copies n bytes from memory area
 * @dest: first pointer to memory
 * @src: second pointer to source memory
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
