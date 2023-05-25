#include <stdio.h>
#include "main.h"

/**
 * main - Entry point .
 * Description: A function to check if a number is positive, negatve or zero.
 * @i: i is integer datatype.
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
