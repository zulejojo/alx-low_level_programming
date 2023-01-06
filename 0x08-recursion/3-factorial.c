#include "main.h"
/**
* factorial-  a function that returns the fatcorial of a given number
* @n: Given number
* Return: factorial
*/
int factorial(int n)
{
if (n < 0)
return (-1); /* to indicate erorr */
else if (n == 0) /* to show n is equql to zero */
return (1);
else
return (n * factorial(n - 1)); /* returns the factorials here */
}
