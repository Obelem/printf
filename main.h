#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int check_specifier(const char *format, int count, int i, va_list args);


#endif
