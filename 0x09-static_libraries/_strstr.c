#include "main.h"
#include <stdio.h>
/**
 * _strstr- searches for the first occurrence of a substring
 * @haystack: eturns a pointer to the beginning of the substring
 * @needle:sub string to check
 * Return:string found, otherwise 0
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
