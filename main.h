#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
void _puts(char *str);
int _atoi(char *s);
int _strlen(char *s);
char *_strrev(char *s);
int _abs(int x);
char *_itoa(int value, char *s);
char *_itoa_o(int value, char *s);
char *_itoa_x(int value, char *s);

#endif
