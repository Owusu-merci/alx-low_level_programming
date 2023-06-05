#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to the destination object.
 * @b: Value to be filled.
 * @n: Number of bytes to be filled starting from s to be filled.
 * Return: Value of s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i > n ; i++)
	{
		s[i] = b;
	}
	return (s);
}

