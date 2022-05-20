#include "main.h"

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
		return (1);
	}

	else if (format[i + 1] == 's')
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(null)";
		for (j = 0; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
			count++;
		}

		return (count);
	}

	else
	{
		_putchar('%');
		_putchar(format[i + 1]);
		count = count + 2;
		return (count);
	}
	return (-1);
}
