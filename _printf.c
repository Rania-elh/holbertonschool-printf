#include "main.h"
/**
 * _printf - A simplified version of printf
 * @format: The format string containing the specifiers
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int count = 0;           // Counter to track the number of characters printed
	va_list args;            // Variable argument list
	va_start(args, format);  // Initialize the va_list
	while (*format)         // Loop through the format string
	{
		if (*format == '%')  // Check for a format specifier
		{
			format++;  // Skip the '%' character
			if (*format == 'c')  // Handle the character specifier
			{
				char c = (char)va_arg(args, int);  // Get the argument of type char
				write(1, &c, 1);  // Print the character
				count++;
			}
			else if (*format == 's')  // Handle the string specifier
			{
				char *str = va_arg(args, char*);  // Get the argument of type string
				if (str == NULL)  // If the string is NULL, print "(null)"
				{
					str = "(null)";
				}
				while (*str)  // Print each character of the string
				{
					write(1, str, 1);
					str++;
					count++;
				}
			}
			else if (*format == '%')  // Handle the literal percentage "%%"
			{
				write(1, "%", 1);
				count++;
			}
			else  // If an unsupported specifier is found, print the '%' followed by the specifier
			{
				write(1, "%", 1);
				write(1, format, 1);
				count += 2;  // Account for the '%' and the specifier character
			}
		}
		else  // If it's not a format specifier, just print the character as is
		{
			write(1, format, 1);
			count++;
		}
		format++;  // Move to the next character in the format string
	}
	va_end(args);  // Clean up the va_list
	return count;  // Return the total number of characters printed
}
