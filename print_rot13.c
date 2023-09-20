#include "main.h"

/**
 * print_rot13 - prints a string using the ROT13 cipher.
 * @R: A variable argument list containing the string to convert.
 * Return: The number of characters printed.
 * Authors: Tinnie & Jay
 */
int print_rot13(va_list R)
{
	int a, h, count = 0;
	char *r;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	r = va_arg(R, char *);
	if (r == NULL)
		r = "(null)";
	for (a = 0; r[a] != '\0'; a++)
	{
		char c = r[a];
		char converted = c;
	if (c >= 'A' && c <= 'Z')
	{
		converted = output[c - 'A'];
	}
	else if (c >= 'a' && c <= 'z')
	{
		converted = output[c - 'a' + 26];
	}
	
	putchear(converted);
	count++;
	}
	
	return (count);
}
