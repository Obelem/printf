#include "main.h"

/**
 * check_specifier - checks for specifier
 * @format: format string
 * @count: char to be printed
 * @i: format string iterator
 * @args: va_list
 * Return: count
 */

int (*check_specifier(const char *format))(va_list args)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
			break;
	}

	return (p[i].f);
}
