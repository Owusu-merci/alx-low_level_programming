#include <stdio.h>

/**
 * main - Entry point.
 * Descrition: a program that prints all arguments it receives.
 * @argc: number of argument passed on the CLI.
 * @argv: Array of Arguments passed on the CLi.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		printf("\n");
	}
	return (0);
}

