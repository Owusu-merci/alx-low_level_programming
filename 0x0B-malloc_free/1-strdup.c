#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: pointer(ptstr) or NULL.
 */

char *_strdup(char *str)
{
	char *ptstr;
	int length_str;
	int count;

	if (str == NULL)
		return (NULL);

	/*get the length of str*/
	while (str[length_str] != '\0')
	{
		length_str++;
	}

	/* determine size and allocate enough memory space for it */
	ptstr = malloc(length_str * sizeof(char) + 1);

	/*check if malloc does not return NULL*/
	if (ptstr == NULL)
	{
		return (NULL);
	}
	/*copy string the new location*/

	for (count = 0; str[count] !=  '\0'; count++)
	{
		ptstr[count] = str[count];
	}
	ptstr[count] = '\0';
	return (ptstr);
}
