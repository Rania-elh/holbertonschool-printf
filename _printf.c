#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 *_printf - produces output according to a format
 *@format: pointer chiaracter string
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	for (const char *ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == 'c')
				count += _putchar(va_arg(args, int));
			else if (*ptr == 's')
				for (char *str = va_arg(args, char *); *str; str++, count++)
					count += _putchar(*str);
			else if (*ptr == '%')
				count += _putchar('%');
			else
				count += _putchar('%') + _putchar(*ptr);
		}
		else
			count += _putchar(*ptr);
	}

	va_end(args);
	return (count);
}

