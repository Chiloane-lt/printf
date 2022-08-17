#include "main.h"

int main()
{
	char ch = 'X';
	int num = 46;
	char *str = "I want to live my best life bra!";

	_printf("This is a character: %c", ch);
	_putchar('\n');

	_printf("This is an integer: %d", num);
	_putchar('\n');

	_printf("This is a string: %s", str);
	_putchar('\n');

	_printf("This is a percentage: %%");
	_putchar('\n');

	_printf("This is an unformated string");
	_putchar('\n');
	
	return (0);
}
