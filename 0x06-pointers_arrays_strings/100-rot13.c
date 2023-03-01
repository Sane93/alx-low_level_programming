#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * rot13- function that encodes a string using rot13
 * @str: string to be encoded
 * Return: encoded string
 */
char *rot13(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			*p = (*p - 'A' + 13) % 26 + 'A';
		}
		else if (*p >= 'a' && *p <= 'z')
		{
			*p = (*p - 'a' + 13) % 26 + 'a';
		}
		p++;
	}
	return (str);
}
