#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: A character pointer to the function.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		_putchar('\n');
	}
}
