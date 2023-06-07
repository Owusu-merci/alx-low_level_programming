#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: A character pointer.
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	 int length;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		length = (1 + _strlen_recursion(s + 1));
	}
	return (length);
}
