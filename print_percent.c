#include "main.h"

/**
  * print_percent - prints the perset sign to standard output
  * @args: variable arguments to be passed to a function
  *
  * Return: 1 on success
  */
int print_percent(va_list args)
{
	(void) args;
	my_putchr('%');
	return (1);
}
