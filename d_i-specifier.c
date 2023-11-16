#include "main.h"
/**
 * negativePositiveInt - prints postive and negative numbers to outpu
 * @n: input
 * Return: Numbers of numbers printed
 */
int negativePositiveInt(int n)
{
	int count = 0;
	unsigned int positive_n;
	
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = n * (-1);
	}
	positive_n = n;
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else if (positive_n <= 9)
	{
		_putchar(positive_n + '0');
		count++;
	}
	else
	{
		count += negativePositiveInt(positive_n / 10);
		_putchar((positive_n % 10) + '0');
		count++;
	}
	return (count);
}
