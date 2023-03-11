#include "main.h"
#include <stdio.h>
/**
 * _strchr-returns a pointer to the first occurrenceof char c
 * @s: string s to be checked
 * @c: char occurence used to check
 * Return: string occurrences, otherwise 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
