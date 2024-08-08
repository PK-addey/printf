#include "main.h"

/**
* _strlen - Returns the length of a string.
* @str: string pointer
* Return: i
*/
int _strlen(char *str)
{
int i = 0;
while (str[i++])
;
return (i - 1);
}

/**
* _strlenc - Returns the length of a constant char pointer string.
* @str: char pointer
* Return: i
*/

int _strlenc(const char *str)
{
int i = 0;
while (str[i++])
;
return (i - 1);
}

