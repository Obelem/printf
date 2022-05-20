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
	int i, count = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			count = check_specifier(format, count, i, args);
			i++;
		}
	}
	va_end(args);
	return (count);
}

/**
 * check_specifier - checks for specifier
 * @format: format string
 * @count: char to be printed
 * @i: format string iterator
 * @args: va_list
 * Return: count
 */
int check_specifier(const char *format, int count, int i, va_list args)
{
	int j = 0;
	char *str;

	if (format[i + 1] == '%')
	{
		_putchar(format[i]);
		count++;
		return (count);
	}
	else if (format[i + 1] == 'c')
	{
		_putchar(va_arg(args, int));
		count++;
		return (count);
	}
	else if (format[i + 1] == 's')
	{
		str = va_arg(args, char *);
		for (j = 0; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
			count++;
		}
		return (count);
	}
	else
		_putchar('%');
	count++;
	return (count);
}
