#include "main.h"

/**
 * swap_int -  Write a function that swaps the values of two integers.
 * @a: An integer pointer in function.
 * @b: An integer pointer in function.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
