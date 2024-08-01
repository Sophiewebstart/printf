#include "main.h"

/**
  * _printf - this function produces output according to a format
  * @format: character string composed of zero or more directives
  *
  * Return: number of bytes printed
  */
int _printf(const char *format, ...)
{
	int i = 0, t, count = 0;
	va_list args;
	specif_t specif[] = {
		{"s", print_str}, {"c", print_char},
		{"%", print_percent}, {NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			for (t = 0; specif[t].specif != NULL; t++)
			{
				if (format[i] == specif[t].specif[0])
				{
					count += specif[t].func(args);
					break;
				}
			}
			if (specif[t].specif == NULL)
			{
				my_putchr('%');
				my_putchr(format[i]);
				count += 2;
			}
		}
		else
		{
			my_putchr(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
