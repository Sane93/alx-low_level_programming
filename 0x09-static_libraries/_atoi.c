#include "main.h"
#include <stdio.h>
/**
 * _atoi- converts char to integer
 * @s: char to be converted
 * Return: converted string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}
