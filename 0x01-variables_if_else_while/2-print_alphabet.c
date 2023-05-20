#include <stdio.h>

/**
 * main - Entry pont.
 * Description: a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	printf("\n");
	return (0);
}
