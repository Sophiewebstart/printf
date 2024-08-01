#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int my_putchr(char c);
int _printf(const char *format, ...);
int print_str(va_list args);
int print_char(va_list args);
int print_percent(va_list args);
int print_num(va_list args);

struct specifier
{
	char *specif;
	int (*func)(va_list);
};

typedef struct specifier specif_t;

#endif
