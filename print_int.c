#include "main.h"

/**
 * print_int - prints an integer.
 * @z: the integer to print
 * Return: number of output printed
 */
int print_int(va_list z)
{
	int digit, number, a, baseten, length, h;
	h = va_arg(z, int);
	int count = 0;
	number = h;
	length = 0;

	if (h != 0)
	{
		if (n < 0)
		{
			_putchear('-');
			count++;
		}
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
				_putchear((digit * - 1)
		}
	
	}


}
