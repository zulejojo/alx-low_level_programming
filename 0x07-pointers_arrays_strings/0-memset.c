#include "main.h"
/**
*The _memset function fills the first n bytes 
*of the memory area pointed to by s with the constant byte b
*Returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n);
{
unsigned int counter;
for (counter=0; counter<n; counter++)
{
s[counter]=b;
}
return (s);
}
