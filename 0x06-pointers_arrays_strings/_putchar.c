#include "main.h"
#include <unistd.h>
/**
 * _putchar- write single character to stdout
 * @c: char to be written
 * Return: integer value of numbers written
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
