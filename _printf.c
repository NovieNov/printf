#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - a function that prints arguments passed to it
 * @format: holds the input
 * Return: Return the value of count
 */
int _printf(const char *format, ...)
{
	int count = 0, i;

	va_list data;

	va_start(data, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			if (format[i + 1] == 'c')
				count += _putchar(va_arg(data, int));
			if (format[i + 1] == 's')
				count += print_string(va_arg(data, char *));
			if (format[i + 1] == '%')
				count += _putchar('%');
			i += 2;
		}
	}
	_putchar('\n');
	return (count);
	va_end(data);
}
