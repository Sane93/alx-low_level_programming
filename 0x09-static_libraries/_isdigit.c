#include "main.h"
#include <ctype.h>
/**
 * _isdigit- checks char is a digit (0-9)
 * @c: char to be checked
 * Return: 1 on success, otherwise zero
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
