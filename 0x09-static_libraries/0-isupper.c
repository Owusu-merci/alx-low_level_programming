#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An integer Datatype.
 * Return: 1 or 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
