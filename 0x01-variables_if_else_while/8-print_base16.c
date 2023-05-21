#include <stdio.h>

/**
 * main- Entry point.
 * Description: Write a program that prints all the numbers of base
 *             16 in lowercase
 * Return: always 0(success).
 */

int main(void)
{
	int num;
	char alpha;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha < 'g'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
