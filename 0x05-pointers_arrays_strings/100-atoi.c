#include "main.h"
/**
 * _atoi- function that convert a string to an integer
 * @s:char to be checked
 * Return: string converted
 */
#include <stdio.h>

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + (s[i] - '0');

		if (s[i] == '+' && s[i + 1] >= '0' && s[i + 1] <= '9')
			break;

		i++;
	}

	return (sign * result);
}
