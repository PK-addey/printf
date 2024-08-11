#include "main.h"
#include <string.h>
/**
* _printf - is a function that selects the correct function to print.
* @format: identifier to look for.
* Return: the length of the string.
*/


int _printf(const char *format, ...)
{
print_t formats[] = {{"%s", print_string}, {"%c", print_char}, {"%%", print_37}
, {"%i", print_int}, {"%d", print_dec}, {"%b", print_bin},
{"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX}
, {"%S", print_exc_string}, {"%p", print_pointer}, {"%r", print_revs} {"%R", print_rot13};

va_list args;
int i = 0, j, length = 0;

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

Here:
while (format[i] != '\0')
{
j = 12;
while (j >= 0)
{
if (formats[j].id[0] == format[i] && formats[j].id[1] ==
format[i + 1])
{
length += formats[j].f(args);
i = i + 2;
goto Here;
}
j--;
}
_putchar(format[i]);
length++;
i++;

}
va_end(args);
return (length);
}
