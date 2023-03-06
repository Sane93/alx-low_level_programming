#include "main.h"
#include <stdio.h>
/**
 * _strpbrk -  function locates the first occurrence in the string s
 * @s: first pointer to byte
 * @accept: bytes available
 * Return: pointer to the byte in s that matches one in accept,
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr, *accept_ptr;

	for (s_ptr = s; *s_ptr != '\0'; s_ptr++)
	{
		for (accept_ptr = accept; *accept_ptr != '\0'; accept_ptr++)
		{
			if (*s_ptr == *accept_ptr)
			{
				return (s_ptr);
			}
		}
	}
	return (NULL);
}
