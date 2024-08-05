#include "main.h"

/**
  * print_num - this function prints an integer to standard output
  * @args:  variable arguements to be passed to the function
  *
  * Return: i
  */
int print_num(va_list args)
{
	char buffer[12];
	int i = 0, j = 0, f;
	int value = va_arg(args, int);

	if (value < 0)
	{
		my_putchr('-');
		i++;
		value = -value;
	}

	if (value == 0)
	{
		buffer[j++] = '0';
	}
	else
	{
		while (value > 0)
		{
			buffer[j++] = (value % 10) + '0';
			value /= 10;
		}
	}

	for (f = j - 1; f >= 0; f--)
	{
		my_putchr(buffer[f]);
		i++;
	}
	
	return (i);
}
