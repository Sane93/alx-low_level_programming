#include "main.h"
/**
 * _atoi- function that convert a string to an integer
 * @s:char to be checked
 * Return: string converted
 */
#include <stdio.h>

int _atoi(char *s)
{
	int sign = 1, num = 0, i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
			|| s[i] == '\r' || s[i] == '\f' || s[i] == '\v')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (sign * num);
}
