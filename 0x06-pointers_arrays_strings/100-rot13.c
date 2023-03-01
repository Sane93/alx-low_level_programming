#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * rot13- function that encodes a string using rot13
 * @s: string to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	char *result = (char *)malloc(sizeof(char) * strlen(s) + 1);
	int i, j;

	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			result[j] = (s[i] - 'a' + 13) % 26 + 'a';
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			result[j] = (s[i] - 'A' + 13) % 26 + 'A';
		}
		else
		{
			result[j] = s[i];
		}
	}
	result[j] = '\0';
	return (result);
}
