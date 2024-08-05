#include "main.h"

/**
  * print_binary - prints an unsigned int argument converted to binary
  * to standard output
  * @args:  variable arguements to be passed to the function
  * Return: number of characters printed
  */
int print_binary(va_list args)
{

	unsigned int value = va_arg(args, unsigned int);
	int i = 0, len = 0;
	char buffer[32];

	if (value == 0)
	{
		return my_putchr('0');
	}

	for (; value > 0; buffer[i++] = (value % 2) + '0')
	{
		value /= 2;
	}

	while (i > 0)
	{
		my_putchr(buffer[--i]);
		len++;
	}

	return (len);
}

