#include "main.h"
#include <stdio.h>
/**
 * _isupper- checks if char is uppercase or not
 * @c: char to be checked
 * Return: On success 1, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
