#include "main.h"
int print_rec_bin(unsigned int i);

/**
  * print_binary - prints an unsigned int argument converted to binary
  * to standard output
  * @args:  variable arguements to be passed to the function
  */
int print_binary(va_list args)
{
	unsigned int i = va_arg(args, unsigned int);

	if (i == 0)
	{
		return my_putchr('0');
	}
	
	return print_rec_bin(i);
}

/**
  * print_rec_bin - recursively prints an unsigned int in binary
  * @i: number to print
  */
int print_rec_bin(unsigned int i)
{
	int len = 0;

	if (i / 2)
	{
		len += print_rec_bin(i / 2);
	}
	
	my_putchr((i % 2) + '0');
	return (len);
}
