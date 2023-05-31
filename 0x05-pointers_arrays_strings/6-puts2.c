#include "main.h"

/**
 * puts2 - a function that prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: A character pointer.
 *
 * Return: void.
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
