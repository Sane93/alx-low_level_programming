#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- print name of a program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
