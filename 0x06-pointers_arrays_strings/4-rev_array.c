#include "main.h"
/**
 * reverse_array- function that reverse array
 * @a: first int pointer
 * @n: number of arrays
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
