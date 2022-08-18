#include "main.h"
#include <stdio.h>

int main()
{

	char ch1 = 'T';
	char ch2 = 'a';
	char ch3 = 'c';
	char ch4 = 'i';
	char ch5 = 'a';

	char sn[] = "Chiloane";

	printf("This is my name: %c%c%c%c%c\n", ch1, ch2, ch3, ch4, ch5);
	_printf("This is my name: %c%c%c%c%c\n", ch1, ch2, ch3, ch4, ch5);

	_printf("\n");
	
	printf("This is my surname: %s\n", sn);
	_printf("This is my surname: %s\n", sn);




	return (0);
}
