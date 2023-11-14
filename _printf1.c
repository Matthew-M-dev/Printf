#include "main.h"

/**
 * print_integer - Print an integer.
 * @args: A va_list containing the integer to print.
 *
 * Return: The number of chars printed.
 */
int print_integer(va_list args)
{
	int num = va_arg(args, int);

	return (printf("%d", num));
}
/**
 * print_formatted_integer - Print an integer acording to the format specifier.
 * @format: A format specifier for the integer.
 * @args: A va_list containing the integer to print.
 *
 * Return: The number of chars printed.
 */
int print_formatted_integer(const char *format, va_list args)
{
	int num = va_arg(args, int);

	return (printf(format, num));
}
/**
 * _printf - Custom printf function supporting i and d.
 * @format: A format string containing specifiers.
 * @...: Additional arguments corresponding to the format specifiers.
 *
 * Return: The total no. of chars printed.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int i;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			i++;
			count += print_integer(args);
		}
		else
		{
			putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
