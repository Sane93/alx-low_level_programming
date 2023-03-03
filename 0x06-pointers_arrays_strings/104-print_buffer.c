#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer- function that prints a buffer
 * @b: bytes
 * @size: size of bytes
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	int i;
	int j;
	unsigned char c;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", b[i + j]);
			}
			else
			{
				printf("  ");
			}
			printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				c = b[i + j];
				if (isprint(c))
				{
					printf("%c", c);
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
}
