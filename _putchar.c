#include <unistd.h>
/**
 * _putchar- writes char to stdout
 * @c: char to be printed
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
