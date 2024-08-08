#include "main.h"

/**
* print_char - prints a character from a va_list
* @val: A va_list containing the character to print
*
* Return: The number of characters printed
*/
int print_char(va_list val)
{
char str;
str = va_arg(val, int);
_putchar(str);
return (1);
}
