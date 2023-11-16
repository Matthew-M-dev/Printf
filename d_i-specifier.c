#include "main.h"
/**
 * negativePositiveInt - prints postive and negative numbers to outpu
 * @n: input
 * Return: Numbers of numbers printed
 */
int negativePositiveInt(int n)
{
	int count = 0;
	
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else if (n <= 9)
	{
		_putchar(n + '0');
		count++;
	}
	else
	{
		count += negativePositiveInt(n / 10);
		_putchar((n % 10) + '0');
		count++;
	}
	return (count);
}

