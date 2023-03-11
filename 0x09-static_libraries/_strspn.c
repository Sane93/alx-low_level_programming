#include "main.h"
#include <stdio.h>
/**
 * _strspn- function calculates the length of the first segment of the string
 * @s: string to be calculated
 * @accept: string to be matched
 * Return: string length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (len);
		}
		len++;
	}
	return (len);
}
