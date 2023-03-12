#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main-  program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 on error
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		long num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
