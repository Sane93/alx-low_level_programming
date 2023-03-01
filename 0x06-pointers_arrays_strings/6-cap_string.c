#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string- function that capitalizes all words of a string
 * @str: char to be checked
 * Return: string checked
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = toupper(str[0]);
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
				|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
				|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '\"'
				|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
				|| str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = toupper(str[i]);
			}
		}
	}
	return (str);
}
