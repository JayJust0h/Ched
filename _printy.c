#include "main.h"
#include <stdarg.h>

/* Function to convert an integer to a string */
void int_to_str(int num, char *num_str)
{
    int i = 0;
    int is_negative = 0;
    int len;

    /* Handle negative numbers */
    if (num < 0)
    {
        is_negative = 1;
        num = -num;
    }

    /* Convert digits to characters in reverse order */
    do
    {
        num_str[i++] = num % 10 + '0';
        num /= 10;
    } while (num > 0);

    /* Add a minus sign for negative numbers */
    if (is_negative)
    {
        num_str[i++] = '-';
    }

    /* Null-terminate the string */
    num_str[i] = '\0';

    /* Reverse the string */
    len = i;
    for (i = 0; i < len / 2; i++)
    {
        char temp = num_str[i];
        num_str[i] = num_str[len - i - 1];
        num_str[len - i - 1] = temp;
    }
}

int print_char(char c)
{
    write(1, &c, 1);
    return 1;
}

int print_string(const char *str)
{
    int str_len = 0;

    while (str[str_len] != '\0')
        str_len++;

    write(1, str, str_len);
    return str_len;
}

int print_int(int num)
{
    char num_str[12]; /* Assuming maximum 11 digits for an int */
     int i = 0;
    int_to_str(num, num_str);
    

    while (num_str[i] != '\0')
    {
        write(1, &num_str[i], 1);
        i++;
    }

    return i;
}

int _printf(const char *format, ...)
{
    int chac_prnt = 0;
    va_list nu_of_args;

    if (format == NULL)
        return (-1);

    va_start(nu_of_args, format);

    while (*format && *format != '%')
    {
        chac_prnt += print_char(*format++);
    }

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                chac_prnt += print_char(va_arg(nu_of_args, int));
            }
            else if (*format == 's')
            {
                chac_prnt += print_string(va_arg(nu_of_args, char *));
            }
            else if (*format == 'd' || *format == 'i')
            {
                chac_prnt += print_int(va_arg(nu_of_args, int));
            }
            else
            {
                chac_prnt += print_char('%');
            }
            format++;
        }
        else
        {
            chac_prnt += print_char(*format++);
        }
    }

    va_end(nu_of_args);
    return (chac_prnt);
}

