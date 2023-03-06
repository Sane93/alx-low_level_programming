#include "main.h"
#include <stdio.h>
/**
 * _strspn- function that gets the length of a prefix substring
 * @s: pointer to memory
 * @accept: second char pointer to memory source
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len = 0;
	int match_found;

	for (i = 0; s[i] != '\0'; i++)
	{
		match_found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match_found = 1;
				break;
			}
		}
		if (!match_found)
		{
			return (len);
		}
		len++;
	}
	return (len);
}
