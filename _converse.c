#include "main.h"
#include <stdarg.h>

/**
 * _printf - function to produce output from a format
 * @format: format specifier
 * Return: number of bytes counted
 * Authors: Tinnie and Jay
 */
int _printf(const char *format, ...)
{
	unsigned int j, count = 0;
	
	va_list args;

	va_start(args, format);

	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j + 1] == 'd')
		{
			putcher(va_arg(args, int));
			j++;
		}
		else if (format[j + 1] == 'i')
		{
			s_count = putts(va_arg(args, *char));
			j++;
			count += (s_count - 1);
		}
		else if (format[j] != '%')
		{
			putcher(format[j]);
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
