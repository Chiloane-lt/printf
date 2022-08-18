#include "main.h"

/**
 * _itoa = Coverts a number string to a character string
 * @value: input string to convert
 * @s: string to store the converted string
 *Notes: Assumes base 10
 */

char *_itoa(int value, char *s)
{
	int i = 0, j, p;

	p = value;

	if (p < 0)
	{
		value = value * -1;
	}

	while (value != 0)
	{
		j = value % 10;
		s[i++] = j + '0';
		value = value / 10;
	}

	if (p < 0)
	{
		s[i++] = '-';
	}
	 s[i] = '\0';

	 _strrev(s);

	 return (s);
}
