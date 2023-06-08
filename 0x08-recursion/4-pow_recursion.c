#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to
 * the power of y.
 * @x: base  number.
 * @y: Exponetial number.
 * Return: 1.
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y == 0)
	{
		return (1);
	}
	else if (y <= 0)
	{
		return (-1);
	}
	else
	{
		power = _pow_recursion(x, y);
		return (power);
	}
}
