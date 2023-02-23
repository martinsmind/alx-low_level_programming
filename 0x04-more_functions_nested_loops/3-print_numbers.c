#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
