#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"


int _printf(const char *format, ...)
{
	int i, j, c;
	char *s;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{

		while (format[i] != '%')
		{	_putchar(format[i]);
			i++;

		}
		
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
		/*else if (format[i] != '%')
                {       while (format[i] != '\0')
			{
				_putchar(format[i]);
                        i++;
			}

                }*/

		i++;
	}
	va_end(args);
	return (i);
}
