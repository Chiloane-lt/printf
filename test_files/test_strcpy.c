#include "main.h"
#include <stdio.h>

int main()
{
    char source_str[] = "www.linuxhint.com";
    char destination_str[30];

    printf("Before calling strcpy() function : \n\n");
    printf("\tSource String       = %s\n", source_str);
    printf("\tDestination String  = %s\n\n", destination_str);

    _strcpy(destination_str, source_str);

    printf("After executing strcpy() function : \n\n");
    printf("\tSource String       = %s\n", source_str);
    printf("\tDestination String  = %s\n\n", destination_str);

    return 0;
}
