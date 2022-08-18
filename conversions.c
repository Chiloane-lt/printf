#include "main.h"

/**
 * _itoa = Coverts a number string to a character string
 * @value: input string to convert
 * @s: string to store the converted string
 * Notes: Does not assume base 10
 */

char *_itoa(int value, char *s)
{
	int i = 0, j, p;

	p = value;

	if (value == 0)
        {
                s[i++] = '0';
        }
	
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

/**
 * _itoa = Coverts a number string to a character string
 * @value: input string to convert
 * @s: string to store the converted string
 *Notes: Assumes base 8 
 */

char *_itoa_o(int value, char *s)
{
	int i = 0, j, p;

	if (value == 0)
	{
		s[i++] = '0';
	}

	p = value;

	if (p < 0)
	{
		value = value * -1;
	}

	while (value != 0)
	{
		j = value % 8;
		s[i++] = j + '0';
		value = value / 8;
	}

	 s[i] = '\0';

	 _strrev(s);

	 return (s);
}

/**
 * _itoa = Coverts a number string to a character string
 * @value: input string to convert
 * @s: string to store the converted string
 * Notes: Assumes base 16 
 */

char *_itoa_x(int value, char *s)
{
	int i = 0, j, p;

	if (value == 0)
	{
		s[i++] = '0';
	}

	p = value;

	if (p < 0)
	{
		value = value * -1;
	}

	while (value != 0)
	{
		j = value % 16;

		if (j >= 10)
		{
			s[i++] = (j - 10) + 'A';
		}
		else
		{
			s[i++] = j + '0';
		}
		value = value / 16;
	}

	 s[i] = '\0';

	 _strrev(s);

	 return (s);
}
