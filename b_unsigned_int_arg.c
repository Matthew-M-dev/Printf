#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always (0) successful.
 */
int main(void)
{
	switchCase('b', binary_converter);

	_printf("b\n", 98);
	return (0);
}

/**
 * binary_converter - Converts an unsigned int to binary.
 * @arg: The unsigned int arg to be converted.
 * @buf: The pointer to store the converted binary string.
 * @size: The size of the buffer.
 *
 * Return: The no. of chars written.
 */
int swithCase(va_list arg, char *buf, int size);
{
	int i, count = 0;
	char binary_string[33];

	for (i = 31; i >= 0; i--)
	{
		binary_string[i] = (value & (1 << i)) ? '1' : '0';
		count++;
	}
	if (count > size)
	{
		return (-1);
	}
	for (i = 0; i < count; i++)
	{
		buf[i] = binary_string[i];
	}
	buf[count] = '\0';

	return (count);
}
