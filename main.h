#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int check_specifier(const char *format, int count, int i, va_list args);
/*
int print_c(va_list c);
int print_s(va_list s);
int (*check_specifier(const char *format))(va_list);
*/
#endif
