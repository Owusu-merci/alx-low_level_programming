#include "main.h"

/**
 *  _sqrt_recursion - a function that returns the natural
 *  square root of a number.
 * @n: square number.
 * Return: 1.
 */

int _sqrt_recursion(int n)
{
	int square;

	if (n == 0)
	{
		return (1);
	}
	else if (n <= 0)
	{
		return (-1);
	}
	else
	{
		square = (n * _sqrt_recursion(n - 1));
		return (square);
	}
}
