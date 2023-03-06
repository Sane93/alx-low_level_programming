#include "main.h"
#include <stdio.h>
/**
 * print_diagsums- function prints su of two diagonals
 * @a:the numbers to be printed
 * @size: size of the int
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *((a + i * size) + j);
			if ((i + j) == (size - 1))
				sum2 += *((a + i * size) + j);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
