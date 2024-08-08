#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct format
{
    char *id;
    int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list val);
int print_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);

#endif
