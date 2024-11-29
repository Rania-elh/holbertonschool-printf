#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 *_printf -  produces output according to a format
 *@format: pointer chiaracter string
 *Returns: the number of characters printed
 */


int _printf(const char *format, ...)
{
	int count=0;
	const char *ptr;
	va_list args;
	va_start(args,format);

	
	for(ptr=format;*ptr!='\0';ptr++)
	{

		if(*ptr!='%')
		{
			_putchar(*ptr);
			count++;

		}
		
		else
		{
			ptr++;

			if(*ptr=='c')	
			{
				char c=va_arg(args,int);

				_putchar(c);
				count++;
			}
			
			else if(*ptr=='s')
			{
				char *s=va_arg(args,char*);
				int i;

				for(i=0;s[i]!='\0';i++)
				{
				_putchar(s[i]);
				count++;
				}
			
			}
			
			else if(*ptr=='%')
			{
				_putchar('%');
				count++;
			}
		}	
	}
	va_end(args);
	return count;
}
