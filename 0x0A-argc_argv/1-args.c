#include <stdio.h>

/**
 * main - Entry point.
 * Description: a program that prints the number of arguments passed into it.
 * @argc: number of commands passed on the CLI.
 * @argv: Array of commands passed on the CLI.
 * Return: Always 0(success).
 */

int main(int  argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
