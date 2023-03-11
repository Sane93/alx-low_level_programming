#include "main.h"
#include <stdio.h>
/**
 * _strpbrk-searches string s,first occurrence of any char in string accept
 * @s: string to be searched
 * @accept: string matched
 * Return: matched string, otherwise 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
