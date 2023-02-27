#include "main.h"
#include <string.h>
/**
 * print_rev-  function that prints a string, in reverse
 * @s:check the string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
