#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c: integer character.
 * Prototype: int _islower(int c);
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 *
 * Return: always 0.
 */

int _islower(int c)
{

	if (c >= 'a'  && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
