#include "main.h"
/**
* print_exc_string - print exclusuives string.
* @val: parameter.
* Return: integer.
*/

int print_exc_string(va_list val)
{
char *string;
int i, length = 0;
int value;
string = va_arg(val, char *);
if (string == NULL)
string = "(null)";
for (i = 0; string[i] != '\0'; i++)
{
if (string[i] < 32 || string[i] >= 127)
{
_putchar('\\');
_putchar('x');
length = length + 2;
value = string[i];
if (value < 16)
{
_putchar('0');
length++;
}
length = length + print_HEX_extra(value);
}
else
{
_putchar(string[i]);
length++;
}
}
return (length);
}
