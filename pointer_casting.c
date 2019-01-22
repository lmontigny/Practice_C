double PI = 3.1415927;
 
char* pc = (char*) &PI;          // (1) safe
char byte0 = *pc;                // (2) safe
 
double* pd = (double*) &byte0;   // (3) unsafe
double d = *pd;                  // (4) undefined behavior
