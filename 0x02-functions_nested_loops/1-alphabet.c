#include "main.h"

/**
 * main - Entry point.
 * Description: a function that prints the alphabet, in lowercase,
 * followed by a new line.
 * Return (0) always.
 */

void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
