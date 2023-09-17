#include "main.h"
#include <stdarg.h>
/**
 * _printf - Function prints formatted text to stout.
 * @format: The format specifier.
 * Return: Total number of bytes counted.
 * Authors: Tinnie and Jay.
 */

int _printf(const char *format, ...)

{
	unsigned int i, count = 0;
	int s_count;

	va_list args;

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putcher(format[i]);
		}
	else if (format[i + 1]  == 'c')
	{
		putcher(va_arg(args, int));
		i++;
	}
	else if (format[i + 1] == 's')
	{
		s_count = puuts(va_arg(args, char *));
			i++;
			count += (s_count - 1);
	}
	else if (format[i + 1] == '%')
	{
		putcher('%');
		i++;
	}
	count += 1;
	}
	va_end(args);
	return (count);
}
