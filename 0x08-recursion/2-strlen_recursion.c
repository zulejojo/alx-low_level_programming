#include "main.h"
/**
* _strlen_recursion:- returns the length of string
* @s: variable to return its length
* Retun: length of string in interger
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
return (0);
}
}
