#include "main.h"

/**
 * prints alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar (letter);

	_putchar('\n');
}
