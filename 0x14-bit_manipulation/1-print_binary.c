#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: the number to be printed in binary.
 */
void print_binary(unsigned int n)
{
	if (n > 1)
		print_binary(n / 2);

	putchar((n % 2) ? '1' : '0');
}
