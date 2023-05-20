#include <stdio.h>

/**
 * main - Entry point.
 * Description: printing the alphabet in lowercase, and then in uppercase
 *
 * Return: always 0(success).
 */
int main(void)
{
	char alpha_lower = 'a';
	char alpha_upper = 'A';


	for (alpha_lower = 'a'; alpha_lower <= 'z'; alpha_lower++)
	{
		putchar(alpha_lower);
	}
	for (alpha_upper = 'A'; alpha_upper <= 'Z'; alpha_upper++)
	{
		putchar(alpha_upper);
	}
	printf("\n");
	return (0);
}
