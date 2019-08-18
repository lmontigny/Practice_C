#include <stdio.h>

#define eprintf(...) printf(__VA_ARGS__)

void main(){
        eprintf("test %f \n", 1.0);
}
