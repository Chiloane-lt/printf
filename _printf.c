#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: The string to print
 *
 * Return: Nothing. Always void.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i <= *str - 1; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - produces output according to format
 * @format: A charcater string composed of zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte
 * used to end output to strings) on success 1.
 *
 */

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
		format++;
		if (format[i] == 'c')
		{	c = va_arg(args, int);
			_putchar(c + 0);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			_puts(s);
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
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
		}
	}
	va_end(args);
	return (0);
}
