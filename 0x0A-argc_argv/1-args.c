#include "main.h"
#include <stdio.h>
/**
 * main- prints number of arguments passed
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
