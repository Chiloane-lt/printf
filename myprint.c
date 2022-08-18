#include "main.h"

int _printf(const char *format, ...)
{
	int c;
	char *s;
	
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
			if (*format == 's')
			{
				s = va_arg(args, char *);
				_puts(s);
			}
			if (*format == '%')
			{
				 _putchar('%');
			}
		}
		else /*if (*format != '%')*/
		{
			_putchar(*format);
		}

		format++;
	}
	va_end(args);
	return (1);
}


