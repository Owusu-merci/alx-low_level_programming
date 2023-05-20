#include <stdio.h>
/**
 * main- Entry pont.
 * Description: prints all single digit numbers of base 10 starting from 0.
 *
 * Return: always 0.
 */

int main(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
