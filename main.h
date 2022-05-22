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

typedef struct print_struct
{
	char *t;
	int (*f)(va_list);
} print_type;


int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_b(va_list b);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int (*check_specifier(const char *format))(va_list);

#endif
