#include "main.h"
#include <string.h>
/**
 *  puts_half- function that prints half of a string
 *  @str: string to be printed
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start = length / 2;

	if (length % 2 == 1)
	{
		start = (length - 1) / 2;
	}

	printf("%s\n", str + start);
}
