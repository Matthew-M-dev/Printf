#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - function that produces output
 * @format: a character string
 * Return: string length
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, k = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] != '\0')
			{
				k = switchCase(args, format, i);
				count += k;
			}
		}
/*		else
		{
			_putchar(format[i]);
			count++;
		}
		*/
	}
	va_end(args);
	return (count);
}
