#include "main.h"
#include <string.h>
/**
 * puts2- nction that prints every other char of a string
 * @str: string to be printed
 * Return: ALways 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
