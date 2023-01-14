#include "main.h"



/**

 * main - Prints the program name followed by a new line

 * @argc: the number of command line arguments

 * @argv: the array of command line arguments

 *

 * Return: 0 on success

 */

int main(int argc, char *argv[])
  
{
  
  int i;
  
  for (i = 0; argv[0][i] != '\0'; i++)
    
    {
      
      putchar(argv[0][i]);
      
    }
  
  putchar('\n');
  
  return (0);
  
}
