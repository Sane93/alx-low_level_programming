#include "main.h"
#include <unistd.h>
/**
 * putchar -writes the character c to stdout
 * &c the character to print
 *
 * Return: 1(Success)
 *on error, -1 is returned
 */

 int _putchar(char c)
{
	return(write(1, &c, 1));
}
