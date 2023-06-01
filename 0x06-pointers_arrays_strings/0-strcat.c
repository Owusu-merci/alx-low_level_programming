#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * Prototype: char *_strcat(char *dest, char *src);
 * @dest: The first character pointer of the first string.
 * @src: The second character pointer of the second string.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
