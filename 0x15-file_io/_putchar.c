#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character C to stdout
 * @c: character to print
 *
 * Return: 1 On success.
 * On error, return -1, and errno is set rightly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
