#include "main.h"
#include <string.h>
/**
 *  _strcmp- compare two strings
 *  @s1: first string to compare
 *  @s2: second string
 *  Return: 0 if strings are not the same,
 *  -1 if the string 1 is lexi smaller,
 *  otherwise return 1 on success
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] < s2[i])
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
