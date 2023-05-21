#include <stdio.h>

/**
 * main-Entry point.
 * Description: a program that prints the lowercase alphabet in reverse other.
 *
 * Return: always 0 (success).
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
