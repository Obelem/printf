#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints %c and %s format specifier
 * @format: format string
 * Return: number of printed charaters
 */
int _printf(const char *format, ...)
{
	va_list args;
	char *str;
	int i, j, count = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			count++;
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str = va_arg(args, char *);
			for (j = 0; str[j] != '\0'; j++)
			{
				_putchar(str[j]);
				count++;
			}
			i++;
		}
		else
			_putchar('%');
		count++;
	}
	va_end(args);
	return (count);
}
