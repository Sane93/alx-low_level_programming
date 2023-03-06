#include "main.h"
#include <unistd.h>
/**
 * _putchar- function that prints char on screen
 * @c: char to be printed
 * Return: bytes to be wriiten
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
