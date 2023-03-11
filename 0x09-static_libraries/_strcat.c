#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat- concatenates strings
 * @dest: pointer to copy to
 * @src: string to concatenate
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
