#include "main.h"
#include <stdarg.h>

/**
 * _print_int - print integers
 * @args: arguments
 * Return: to function id
 */

int print_int(va_list args)
{
int count = 0;
int n = va_arg(args, int);
if (n < 0)
{
	_putchar('-');
	n = -n;
	count++;
}
if (n / 10 != 0)
count += print_int(args);
_putchar((n % 10) + '0');
count++;
return (count);
}
