#include "main.h"
#include <stdio.h>

int main() {

  int b = 896521475;

  char s[10];
   char *ptr = s;

   printf("This is in decimal: %s\n", _itoa(b, ptr));
   printf("This is in octal: %s\n", _itoa_o(b, ptr));
   printf("This is in hex: %s\n", _itoa_x(b, ptr));
	return (0);

}

