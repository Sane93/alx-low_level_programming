#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat -  function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
