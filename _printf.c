#include "main.h"

/**
 *  _printf - prints %c and %s format specifier
 *  @format: format string
 *  Return: number of printed charaters
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

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
			if (count == -1)
				break;
			i++;
		}
	}

	va_end(args);
	return (count);
}
