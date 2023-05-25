#include "main.h"

/**
 * main - Entry point.
 * a function that prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: always 0.
 */


void print_alphabet_x10(void)
{
	int i = 1;
	char alpha = 'a';

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z';  alpha++)
			_putchar(alpha);
			 _putchar('\n');
	}
}

