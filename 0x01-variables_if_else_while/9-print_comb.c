#include <stdio.h>

/**
 * main- Entry point.
 * Description: A program that prints all possible combinations
 *             of single-digit numbers
 * Return: always 0 (success).
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}

