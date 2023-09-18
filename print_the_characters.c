#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_char - Prints the c to standard output.
 * @c: Character being printed.
 * Return: 1 (success).
 * Authors: Tinnie and Jay.
 */

int print_char(va_list c)

{
	unsigned char uno_charc;

	uno_charc = va_arg(c, int);
	putchear(uno_charc);
	return (1);
}

/**
 * print_paurcentage - Finds and Prints %.
 * Return: 1 (success granted).
 */

int print_paurcentage(void)
{
	putchear('%');
	return (1);
}

/* T&J */
