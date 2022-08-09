#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - a function that prints arguments passed to it
 * @format: holds the input
 * Return: Return the value of n
 */
int _printf(const char *format, ...)
{
	int n = 0, i;

	va_list data;
	va_start(data, format);
	
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			n++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(data, int));
					n++;
					break;
				default:
					break;
			}
		}
	}
	_putchar('\n');
	return (n);
	va_end(data);
}
