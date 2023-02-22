#include "main.h"
/**
 * print_last_digit- function that prints the last digit of a number
 * @a: number to be checked
 * Return: k (success)
 */
int print_last_digit(int a)
{
	int k;

	k = a % 10;
	if (a < 0)
	k = -k;
	return (k);
}
