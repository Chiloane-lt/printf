#include "main.h"
#include <unistd.h>

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

