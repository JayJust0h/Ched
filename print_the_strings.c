#include "main.h"
#include <stdlib.h>

/**
 * print_string - Writes to the std output.
 * @s: character to find and output.
 * Return: 1 (success).
 * Authors: Tinnie and Jay.
 */

int print_string(va_list s)

{
	char *da_strng = va_arg(s, char *);
	int ch = 0;

	if (da_strng == NULL)
		da_strng = "(null)";
	while (da_strng[ch])
	{
		putchear(da_strng[ch]);
		ch++;
	}
	return (ch);
}
			
