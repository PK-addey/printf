#include "main.h"

/**
* print_string - prints a string from a va_list
* @val: A va_list containing the string to print
*
* Return: The number of characters printed
*/

int print_string(va_list val)
{
char *str = va_arg(val, char *);

if (str == NULL)
str = "(null)";
return (_strlen(str));
}
