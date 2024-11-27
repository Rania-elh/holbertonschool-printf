#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Simplified implementation of printf.
 * @format: The format string containing the specifiers.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0; /* Counter for printed characters */
	int i, j; /* Declare i and j variables before the loops */

	/* Initialize the arguments list */
	va_start(args, format);

	/* Loop through the format string */
	for (i = 0; format[i] != '\0'; i++) {
		if (format[i] == '%') {
			/* If '%' is found, check the next character */
			i++; /* Move to the next character */
			if (format[i] == 'c') {
				/* Specifier for a character */
				char c = va_arg(args, int); /* Retrieve the character */
				write(1, &c, 1); /* Print the character */
				count++; /* Increment the counter */
			}
			else if (format[i] == 's') {
				/* Specifier for a string */
				char *str = va_arg(args, char*);
				/* If the string is NULL, print "(null)" */
				if (str == NULL) {
					str = "(null)";
				}
				/* Print the string character by character */
				for (j = 0; str[j] != '\0'; j++) {
					write(1, &str[j], 1);
					count++; /* Count the characters */
				}
			}
			else if (format[i] == '%') {
				/* If '%%' is found, print a literal '%' */
				write(1, "%", 1);
				count++; /* Count the '%' character */
			}
		}
		else {
			/* If it's not a '%', print the character as is */
			write(1, &format[i], 1);
			count++; /* Count the characters */
		}
	}

	/* Clean up the arguments list */
	va_end(args);

	/* Return the number of characters printed */
	return (count);
}

