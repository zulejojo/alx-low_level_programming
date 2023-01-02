#include "main.h"
/**
* char *_memcpy function copies n bytes from memory area src to memory area dest
* @src: copy source
* @dest: Copy destination
* @n: no of bytes
*
* returns dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int size=n;
if (size > 0)
{
int counter;
for (counter = 0; counter < size; counter++)
dest[counter]=src[counter];
}
return(dest);
}
