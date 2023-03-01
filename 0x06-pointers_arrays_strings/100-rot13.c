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
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			c = s[i] + 13;
			if (c > 'z')
				c -= 26;
			s[i] = c;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			c = s[i] + 13;
			if (c > 'Z')
				c -= 26;
			s[i] = c;
		}
	}
	return (s);
}
