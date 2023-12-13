#include <ctype.h>
#include "monty.h"
/**
 * is_digit - numbers the strings
 * @string: string to check
 * Return:0 means failure
 */
int is_digit(char *string)
{
if (!string || *string == '\0')
return (0);
if (*string == '-')
string++;
while (*string)
{
if (isdigit(*string) == 0)
return (0);
string++;
}
return (1);
}
/**
 * isnumber - proves the numbers
 * @str: provided string
 * Return: 1 is successful
 */
int isnumber(char *str)
{
int i;
if (!str)
return (0);
for (i = 0; str[i]; i++)
if (i < '0' || i > '9')
return (0);
return (1);
}
