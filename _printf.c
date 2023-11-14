#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf -main entryi
 * @format: input
 * Return: Always 0 (success)
 */
int _printf(const char *format, ...)
{
	int i;
	va_list ap;
	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				{
					char c = va_arg(ap, int);
					putchar(c);
					break;
				}
				case 's':
				{
					char *s = va_arg(ap, char*);
					while (*s != '\0')
					{
						putchar(*s);
						s++;
					}
					break;
				}
				case '%':
				{
					putchar('%');
					break;
				}
				default:
				{
					putchar(format[i]);
				}
			}
		}
		else
		{
			putchar(format[i]);
		}
	}
	va_end(ap);
	return (0);
}





