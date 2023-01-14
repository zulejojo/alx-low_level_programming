#include <stdio.h>
#include "main.h"
/**
* main - Prints the number of command line arguments passed to the program
* @argc: the number of command line arguments
* @argv: the array of command line arguments (unused)
*
* Return: 0 on success
*/
int main(int argc, char **argv)
{
(void)argv; /*ignore argv*/
printf("%i\n", argc - 1);
return (0);
}
