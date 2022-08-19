#include "main.h"
#include <stdlib.h>

/**
 * _printf - prints input accroding tp specified format
 *
 * @format: format specifier character
 * Return: No. of charcters printed
 */

int _printf(const char *format, ...)
{
	int c, i = 0;
	char *s, *num = malloc(sizeof(int) * 8 + 1);
	va_list args;

	if (!num)
	{
		return (0);
	}
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = (char) va_arg(args, int);
				_putchar(c + 0);
				i++;
			} else if (*format == 's')
			{
				s = va_arg(args, char *);
				_puts(s);
				i++;
			} else if (*format == 'd')
			{
				_puts(_itoa((va_arg(args, int)), num));
				i++;
			} else if (*format == 'o')
			{
				_puts(_itoa_o((va_arg(args, int)), num));
			} else if (*format == 'x')
			{
				_puts(_itoa_x((va_arg(args, int)), num));
				i++;
			} else if (*format == '%')
			{
				_putchar('%');
				i++;
			}
		} else
		{
			_putchar(*format);
			i++;
		} format++;
	} free(num);
	va_end(args);
	return (i);
}


