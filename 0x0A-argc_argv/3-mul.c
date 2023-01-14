#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Multiplies two numbers
* @argc: the number of command line arguments
* @argv: the array of command line arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char **argv)
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%i\n", result);
return (0);
}
