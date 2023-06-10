#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: A character pointer in function.
 * Return: len.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
