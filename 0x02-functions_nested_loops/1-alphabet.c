#include "main.h"
/**
 * print_alphabet- prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'n'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
