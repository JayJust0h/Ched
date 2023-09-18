#include "main.h"

/**
 * puuts - Prints the strings.
 * @c: The string.
 * Return: The number of the bytes.
 * Tinnie and Jay
 */

int puuts(char *c)

{
	int counter = 0;

	if (c)
	{
		for (counter = 0; c[counter] != '\0'; counter++)
		{
			putcher(c[counter]);
		}
	}
	return (counter);
}
