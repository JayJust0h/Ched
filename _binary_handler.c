#include "main.h"
/**
 * print_bin - Cornvert decimal to binary operator.
 * @b: The number stated in dec.
 * Return: Output of characters.
 */

int print_bin(va_list b)

{
	unsigned int length, baseten, ju, digit, no, number;
	int count = 0;

	no = va_arg(b, unsigned int);
	if (n != 0)
	{

	number = no;
	length = 0;

	while (num != 0)
	{
		number = no;
		length = 0;
		while (num != 0)
		{
			number /= 2;
			length++;
		}
		baseten = 1;
		for (ju = 1; ju <= length - 1; ju++)
			baseten *= 2;
		for (ju = 1; j <= length; ju++)
		{
			digit = no / baseten;
			putchear(digit + '0');
			count++;
			no -= digit * baseten;
			baseten /= 2;
		}
	}
	else
	{
		putchear('0');
		return (1);
	}
	return (count);
	}
}
