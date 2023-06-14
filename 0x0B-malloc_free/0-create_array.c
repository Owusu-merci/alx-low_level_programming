#include <stdlib.h>

/**
 * create_array -a function that creates an array of chars,
 *                 and initializes it with a specific char.
 * @size: size of the array to be created.
 * @c: char to initialize the array c.
 *
 * Return: pointer (ptr) or NULL.
 */


char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	/*allocating enough space for all array members */

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	/* put a char c in each of the memory locations*/

	for (i = 0; i < size; i++)
	{
		/*assign the char to the specific memory location*/
		ptr[i] = c;
	}

	return (ptr);

}
