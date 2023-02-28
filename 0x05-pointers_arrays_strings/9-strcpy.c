#include "main.h"
#include <unistd.h>
/**
 * _strcpy- function that copies the string pointed to by src
 * @dest: value returned to
 * @src: points to dest
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}

	*p = '\0';
	return (dest);
}
