#include "main.h"
#include <stdio.h>

int main() {

  int b = -56310;

  char s[10];
   char *ptr = s;

   printf("This a negative: %s", _itoa(b, ptr));
	return (0);

}
