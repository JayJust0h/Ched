#include "main.h"

/**
 * print_int - prints an integer.
 * @z: the integer to print
 * Return: number of output printed
 */
int print_int(va_list z)
{
	int digit, number, a, baseten, length, h, count = 0;

	h = va_arg(z, int);

	if (h != 0)
	{
		if (n < 0)
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
		for (a = 1; a <= len; a++)
		{
			digit = h / baseten;
			if (h < 0)
				_putchear((digit * -1) + 48);
			else
				_putchear(digit + '0');
			count++;
			h -= digit * baseten;
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
