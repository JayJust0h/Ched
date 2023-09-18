	#include <stdarg.h>
#include "main.h"
	#include <stddef.h>
	#include <string.h>
	#include <unistd.h>
/**
_printf - Printf function
 * @format: format string
 * Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
    int chac_prnt = 0;
    va_list nu_of_args;

    if (format == NULL)
        return -1;

    va_start(nu_of_args, format);
    while (*format)
    {
        if (*format != '%')
        {
            write(1, format, 1);
            chac_prnt++;
        }
        else
        {
            format++;
            if (*format == '\0')
                break;
            if (*format == '%')
            {
                write(1, format, 1);
                chac_prnt++;
            }
            else if (*format == 'c')
            {
                char c = (va_arg(nu_of_args, int));
                write(1, &c, 1);
                chac_prnt++;
            }
            else if (*format == 's')
            {
                char *strn = va_arg(nu_of_args, char*);
                int str_len = 0;

                while (strn[str_len] != '\0')
                    str_len++;
                write(1, strn, str_len);
                chac_prnt = str_len;
            }
            else if (*format == '%')
            {
                write(1, "%", 1);
                chac_prnt++;
            }
            format++;
        }
    }
    va_end(nu_of_args);
    return chac_prnt;
}
