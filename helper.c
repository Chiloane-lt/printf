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
}

/**
 * _strlen - Determines string length
 * @s: String whose length to check
 *
 * Return: Length of s
 */

int _strlen(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
 * _strrev - prints the reverse of a string onto stdout
 * @s: pointer variable
 *
 * Return: pointer to reversed string
 */

char *_strrev(char *s)
{
	int len, i = 0, j;
	char c;

	if (!*s)
	{
		return (NULL);
	}
	else
	{
		len = _strlen(s);
		j = len - 1;

		while (i < j)
		{
			c = s[i];
			s[i] = s[j];
			s[j] = c;
			j--;
			i++;
		}


	}
	return (s);
}

