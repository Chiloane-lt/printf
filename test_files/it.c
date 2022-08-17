#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"


int _printf(const char *format, ...)
{
	int i, c, j;
	char *s = malloc(sizeof(int) * 8 + 1);
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			
			if (format[i] == 'c')
			{	
				c = (char) va_arg(args, int);
				_putchar(c + 0);
				break;
			}
			else if (format[i] == 's')
			{
				s = va_arg(args, char *);
				_puts(s);
				break;
			}
			else if (format[i] == 'd')
			{
				j = va_arg(args, int);
				if (j < 0)
				{
					j = -j;
					_putchar('-');
				}
				_putchar(j);
				break;
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	i++;
	va_end(args);
	return (i);
}
