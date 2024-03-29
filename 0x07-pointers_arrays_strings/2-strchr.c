#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: This is a pointer to the null-terminated byte string
 * @c: This is a character to search for.
 * Return: a pointer to the located character, or a null pointer.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
