#include "main.h"

/**
 * print_dec - function to print decimals
 * @d: integer to be printed
 * Authors: Tinnie and Jay
 * Return: output text size
 */
int print_dec(va_list d)
{
	int length, baseten, number, a, count = 0, h, digit;

	h = va_arg(d, int);
	if (h != 0)
	{
		if (h < 0)
		{
			_putchear('-');
			count++;
		}
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
		for (a = 1 a <= length; a++)
		{
			digit = h / baseten;
			if (n < 0)
				_putchear((digit * -1) + 48);
			else
				_putchear(digit + '0');
			count++;
			n -= digit * baseten;
			baseten /= 10;
		}
	}
	else
	{
		_putchear('0');
		return (1);
	}
	return (count);
}
