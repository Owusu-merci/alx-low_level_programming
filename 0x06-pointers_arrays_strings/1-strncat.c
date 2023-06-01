#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * Prototype: char *_strcat(char *dest, char *src int n);
 * @dest: The first character pointer of the first string.
 * @src: The second character pointer of the second string.
 * @n: number of characers in src
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *begin = dest;

	while (*dest != '\0')
	{
		dest++;
	}
		while (n-- && *src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
		return (begin);
}
