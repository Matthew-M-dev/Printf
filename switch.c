#include "main.h"
#include <unistd.h>
#include <stdio.h>

int _putstr(char *str);
/**
 * switchCase - holds the switch statement
 * @args: va_list
 * @format: format array
 * @i: length
 * Return: length of string
 */
int switchCase(va_list args, const char *format, int i)
{
	int count = 0;
	char *s;
	char c;

	switch (format[i])
	{
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
			{
				count += _putstr("(null)");
			}
			else
			{
				count += _putstr(s);
			}
			break;
		case 'c':
			c = va_arg(args, int);
			putchar(c);
			count++;
			break;
		case '%':
			putchar('%');
			count += 1;
			break;
		default:
			putchar('%');
			putchar(format[i]);
			count += 2;
			break;
	}
	return (count);
}
/**
 * _putstr - prints string
 * @str: the string
 *
 * Return: the length of the string
 */
int _putstr(char *str)
{
	int i = 0;

	while (*str)
	{
		i += putchar(*str);
		str++;
	}
	return (i);
}
