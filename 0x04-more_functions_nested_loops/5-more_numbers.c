#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: void.
 */

void more_numbers(void)
{
	int num;
	int num1;

	for (num = 0; num <= 10; num++)
	{
		for (num1 = 0; num1 <= 14; num1++)
		_putchar(num1 + '0');
	}
	_putchar(num + '0');
}
