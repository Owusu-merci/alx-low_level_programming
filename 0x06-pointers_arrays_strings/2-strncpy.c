#include "main.h"
/**
 * _strncpy- A function that copies a string.
 * @dest: Pointer to the destination array where the content is to be copied.
 * @src:it is a pointer to the source string which will be copied.
 * @n: The first n character copied from src to dest.
 *
 * Return: A pointer to the destination string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *merci = dest;

	while (n-- && *src != '\0')
	{
		*dest++ = *src++;
	}

	while (n-- > 0)
	{
		*dest = '\0';
	}
	return (merci);
}
