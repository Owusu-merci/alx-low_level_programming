#includ "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: character pointer in function
 *
 * Return: void.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
