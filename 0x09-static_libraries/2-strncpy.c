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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
