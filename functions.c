#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_c - to print character
 * @args: character argument
 * Return: number of characters
 */

int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * print_s - to print a string
 * @args: string  argument
 * Return: number of characters
 */

int print_s(va_list args)
{
	int i, counter = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		counter++;
	}
	return (counter);
}

/**
 * print_percent - to read the percentage sing
 * @args: string  argument
 * Return: return the percent sing
 */

int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_d - to print decimals
 * @args: decimal argument
 * Return: counterer
 */

int print_d(va_list args)
{

	unsigned int abs, au, counteriue, counter;
	int n;

	counter = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			abs = (n * -1);
			counter += _putchar('-');
		}
		else
			abs = n;

	au = abs;
	counteriue = 1;
	while (au > 9)
	{
		au /= 10;
		counteriue *= 10;
	}
	while (counteriue >= 1)
	{
		counter += _putchar(((abs / counteriue) % 10) + '0');
		counteriue /= 10;
	}
	return (counter);
}

/**
 * print_i - to print integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_i(va_list args)
{
	return (print_d(args));
}
