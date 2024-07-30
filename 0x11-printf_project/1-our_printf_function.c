#include <stdarg.h>
#include "main.h"

/**
* _printf - produces output according to a format
* @format: a character string composed of zero or more directives
*
* Return: the number of characters printed (excluding the null byte)
*/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
const char *ptr;

va_start(args, format);

for (ptr = format; *ptr != '\0'; ptr++)
{
if (*ptr == '%')
{
ptr++;
switch (*ptr)
{
case 'c':
count += print_char((char)va_arg(args, int));
break;
case 's':
count += print_string(va_arg(args, char *));
break;
case '%':
count += print_char('%');
break;
default:
count += print_char('%');
count += print_char(*ptr);
break;
}
}
else
{
count += print_char(*ptr);
}
}

va_end(args);
return (count);
}
