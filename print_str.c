#include "main.h"
/**
 * print_str - a function that prints a string to standart output
 * @args: variable argument to be passed to the functiom
 *
 * Return: count
 */
int print_str(va_list args)
{
	char *my_str = (va_arg(args, char *));
	int count = 0;

	while (*my_str)
	{
		my_putchr(*my_str);
		my_str++;
		count++;
	}
	return (count);
}
