#include <stdlib.h>
#include "main.h"
/**
* create_array - creates an array of chars and initializes...
* @size: size of the array
* @c: char to initialize the array with
*
* Return: pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;
if (size == 0)
{
return (NULL);
}
/*Define values with malloc*/
buffer = (char *) malloc(size * sizeof(c));
if (buffer == 0)
{
return (NULL);
}
else
{
position = 0;
while (position < size) /*While for array*/
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
}
