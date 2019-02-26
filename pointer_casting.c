#include <stdio.h>

int main(void)
{
 double PI = 3.1415927;

 char* pc = (char*) &PI;          // (1) safe
 char byte0 = *pc;                // (2) safe

 double* pd = (double*) &byte0;   // (3) unsafe
 double d = *pd;                  // (4) undefined behavior

 return 0;
}



/*
From Stack overflow:

(int *)p=&l;
The line above doesn't work, because as soon as you cast p to (int*), 
the result is an anonymous temporary object, which is an rvalue and not an lvalue; 
consquently, the result cannot receive the assignment, and even if the language did allow it, 
you'd be assigning to a temporary casted copy of p, not to the original p.

p=&((char) l);
The line above does not work for a similar reason; 
the result of (char) l is a temporary object that is a copy of l casted to the type char. 
Consequently, because it is temporary, you cannot take its address.

Insead, you can use:
p = (char*) &l

*/
