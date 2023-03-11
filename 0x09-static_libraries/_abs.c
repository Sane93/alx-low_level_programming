#include "main.h"
#include <stdio.h>
/**
 * _abs- computes absolute value of an integer
 * @n:integer to be computed
 * Return: the integer otherwise its negation
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
