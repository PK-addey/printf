#include <unistd.h>
#include <stddef.h>
#include "main.h"

/**
* print_char - prints a character
* @c: character to print
*
* Return: the number of characters printed
*/
int print_char(char c)
{
return (write(1, &c, 1));
}

/**
* print_string - prints a string
* @s: string to print
*
* Return: the number of characters printed
*/
int print_string(const char *s)
{
int count = 0;

if (s == NULL)
s = "(null)";

while (*s != '\0')
{
count += write(1, s, 1);
s++;
}

return (count);
}
