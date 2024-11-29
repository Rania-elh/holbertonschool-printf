#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according to a format
 * @format: format types
 * Return: count
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	va_list args;

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
			i++;
			if (format[i] == 'c')
			{
				count += _printf_char(args);
			}
			else if (format[i] == 's')
			{
				count += _printf_string(args);
			}
			else if (format[i] == '%')
			{
				count += _printf_modulo(args);
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
	}
	va_end(args);
	return (count);
}
