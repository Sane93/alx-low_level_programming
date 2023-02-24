#include <stdio.h>
/**
 * main- program that finds and prints the largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	long int largest_factor = 2;

	while (num > largest_factor)
	{
		if (num % largest_factor == 0)
		{
			num /= largest_factor;
		}
		else
		{
			largest_factor++;
		}
	}

	printf("%ld\n", largest_factor);
	return (0);
}
