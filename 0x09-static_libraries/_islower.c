#include "main.h"
#include <stdio.h>
/**
 * _lower- checks if char is lowercase or not
 * @c: char to be checked
 * Return: 1 on success, otherwise Always 0
 */
int _lower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
