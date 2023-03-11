#include "main.h"
#include <stdio.h>
/**
 * _memcpy- copy a block of memory from one location to another
 * @dest: a pointer to the destination array
 * @src: pointer to the source of data
 * @n:number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
