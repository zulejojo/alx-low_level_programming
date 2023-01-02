#include "main.h"
#incldue <stdio.h>
/**
*The _memset function fills the first n bytes 
*of the memory area pointed to by s with the constant byte b
*Returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int );
{
unsigned int counter;
for (counter=0; counter<n; counter++)
{
s[counter]=b;    
}
return (s);
}
