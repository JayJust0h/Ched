#include "main.h"

/**
 * print_rev - Prints te reverse of String.
 * @r: String being reaversed.
 * Return: Total of characters printed.
 * Authors : Tinnie and Jay.
 */

int print_rev(va_list r)

{
	char *strng;

	int n, k = 0;

	strng = va_arg(r, char *);
	if (strng == NULL)
		strng = ")llun(";
	for (n = 0; strng[n] != '\0'; n++)
		;

	for (n -= 1 ; n >= 0; n--)
	{
		putchear(strng[n]);
		k++;
	}
	return (k);
}
/* T&J*/
