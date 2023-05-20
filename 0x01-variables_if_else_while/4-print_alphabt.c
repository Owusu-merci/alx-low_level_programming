#include <stdio.h>

/**
 * main- Entry point.
 * Description: Print all the letters except q and e.
 *
 * Return: always 0(Success).
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		 alpha++;
	}
	printf("\n");
	return (0);
}
