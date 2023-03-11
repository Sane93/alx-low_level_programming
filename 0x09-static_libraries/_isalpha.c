#include "main.h"
#include <stdio.h>
/**
 * _isalpha- function to check if char is alpha
 * @c: char to be checked
 * Return: on success 1, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
