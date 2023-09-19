#include "main.h"

/**
 * print_hex -  Converts unsigned integers to Hexadecimals.
 * description: prints the correct value.
 * @no: The unsigned integer value to convert.
 * @c: Correct case to print 0 is lower and 1 Upper.
 * Return: output size.
 * Authors: Tinnie and Jay.
 */

int print_hex(unsigned int no, unsigned int c)

{
	unsigned int length, baseten, ju, digit, number;
	int count = 0;
	char diff;

	if (no != 0)
	{
		number = no;
		length = 0;
		if (c)
			diff = 'a' - ':';
		else
			diff = 'A' - ':';
		while (number != 0)
		{
			number /= 16;
			length++;
		}
		baseten = 1;
		for (ju = 1; ju <= length - 1; ju++)
			baseten *= 16;
		for (ju = 1; ju <= length; ju++)
		{
			digit = no / baseten;
			if (digit < 10)
				putchear(digit + '0');
			else
				putchear(digit + '0' + diff);
			count++;
			no -= digit * baseten;
			baseten /= 16;
		}
	}
	else
	{
	putchear('0');
	return (1);
	}
	return (count);
}

/**
 * print_X - Prints Uppecase conversion of int.
 * @X: The printed unsigned int.
 * description: prints the Uppercase hexadecimal.
 * Return: Output size.
 */

int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}

/**
 * print_x - Prints Uppecase conversion of int.
 * @x: The printed unsigned int.
 * description: prints the lowercase hexadecimal.
 * Return: Output size.
 */

int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}
/* T&J */
