//======================== //
// Out of scope
//======================== //

#include<stdlib.h>
void main()
 {
   char *ptr = NULL;
   .....
   .....
   {
       char ch;
       ptr = &ch;
   } 
   .....   /* dp is now a dangling pointer */
}


//======================== //
Function return
//======================== //

int * func ( void )
{
    int num = 14;
    /* ... */
    return &num;
}
