#include "main.h"

/**
 * print_unsign - function to print an unsigned data
 * @u: unsigned data type
 * Author: Tinnie and Jay
 * Return: output type
 */
int print_unsign(va_list u)
{
	unsigned int length, baseten, a, number, digit, h;
	int count = 0;

	h = va_arg(u, unsigned int);
	if (h != 0)
	{
		number = h;
		length = 0;
		while (number != 0)
		{
			number /= 10;
			length++;
		}
		baseten = 1;
		for (a = 1; a <= length - 1; a++)
			baseten *= 10;
		for (a = 1; a <= length; a++)
		{
			digit = h / baseten;
			putchear(digit + '0');
			count++;
			h -= digit * baseten;
			baseten /= 10;
		}
	}
	else
	{
		putchear('0');
		return (1);
	}
	return (count);
}
