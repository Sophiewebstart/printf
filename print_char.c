#include "main.h"
/**
  * print_char - this prints a char to standard output
  * @args: variable arguments to be passed to the functiom
  *
  * Return: 1 on success.
  */

int print_char(va_list args)
{
	my_putchr(va_arg(args, int));
	return (1);
}
