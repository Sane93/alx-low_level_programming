#include "main.h"
#include <stdio.h>
/**
 * _strlen- checks length of a string
 * @s: string to be checked
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
