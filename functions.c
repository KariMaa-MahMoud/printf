#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints character
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
 * print_s - prints a string
 * @args: string  argument
 * Return: number of characters
 */
int print_s(va_list args)
{
	int i, counter = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (!str)
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
 * print_percent - pass the percent sing
 * @args: string  argument
 * Return: return the percent sing
 *
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
 * print_d - prints a decimal
 * @args: decimal argument
 * Return: counterer
 */
int print_d(va_list args)
{

	unsigned int abs, abc, con, counter;
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

	abc = abs;
	con = 1;
	while (abc > 9)
	{
		abc /= 10;
		con *= 10;
	}
	while (con >= 1)
	{
		counter += _putchar(((abs / con) % 10) + '0');
		con /= 10;
	}
	return (counter);
}
/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_i(va_list args)
{
	return (print_d(args));
}
