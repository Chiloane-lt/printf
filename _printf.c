#include "main.h"
#include <stdlib.h>

int _printf(const char *format, ...)
{
	int c;
	char *s;
	char *num = malloc(sizeof(int) * 8 + 1);
	
	va_list args;
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
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				_puts(s);
			}
			else if (*format == 'd')
			{
				_puts(_itoa((va_arg(args, int)), num));

			}
			else if (*format == 'o')
			{
				_puts(_itoa_o((va_arg(args, int)), num));
			}
			else if (*format == 'x')
			{
				_puts(_itoa_x((va_arg(args, int)), num));
			}
			else if (*format == '%')
			{
				 _putchar('%');
			}
		}
		else
		{
			_putchar(*format);
		}

		format++;
	}
	free(num);
	va_end(args);
	return (1);
}


