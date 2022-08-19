#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _printf - prints input accroding tp specified format
 *
 * @format: format specifier character
 * Return: No. of charcters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	char *s, *num = malloc(sizeof(int) * 8 + 1);
	char buffer[1024];
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
				buffer[i] = (char) va_arg(args, int);
				i++;
			} else if (*format == 's')
			{
				s = va_arg(args, char *);
				strcpy(&buffer[i], s);
				i += _strlen(s);
			} /*else if (*format == 'd')
			{
				_puts(_itoa((va_arg(args, int)), num));
				i++;
			} else if (*format == 'o')
			{
				_itoa_o((va_arg(args, int)), num);

			} else if (*format == 'x')
			{
				_puts(_itoa_x((va_arg(args, int)), num));
				i++;
			}*/
			else if (*format == '%')
			{
				buffer[i] = '%';
				i++;
			}
		} else
		{
			buffer[i] = *format;;
			i++;
		} format++;
	} /*free(num);*/
	fwrite(buffer, i, 1, stdout);
	va_end(args);
	return (i);
}


