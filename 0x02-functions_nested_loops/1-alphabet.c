#include "main.h"

/**
 * main - Entry poin.
 * Description:a function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: always 0.
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
