#include "main.h"

/**
 * print_octal - converts unsigned ontegers to octal format.
 * @o: The unsigned integers for handling.
 * description: used to print the Octal format.
 * Authors: Tinnie and Jay.
 */

int print_octal(va_list o)

{
	unsigned int length, baseten, ju, digit, no, number;
	int count = 0;

	no = va_arg(o, unsigned int);
	if (no != 0)

	{
		number = no;
		length = 0;

		while (number != 0)
		{
			number /= 8;
			length++;
		}

		baseten = 1;
		for (ju = 1; ju <= length -1; ju++)
			baseten *= 8;
		for (ju = 1; ju <= length; ju++)
		{
			digit = no / baseten;
			putchear(digit + '0');
			count++;
			no -= digit * baseten;
			baseten /= 8;
		}
	}
	else
	{
		putchear('0');
		return (1);
	}
	return (count);
}
