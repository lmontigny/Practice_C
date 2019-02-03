#include <stdio.h>

void printChar()
{
        char foo[10] = "abcdefghij";
        for(int i=0; i<10; i++)
        {
                printf("char %c \n", foo[i]);
        }
}

void bitManipulation()
{
        // Init
        int x = 32;

        // Bitwise left, mul
        printf("left shift, x %d \n", x<<1);

        // Bitwise right, div
        printf("right shift, x %d \n", x>>1);

        // Bitwise xor
        printf("xor, x %d \n", x^1);

        // Bitwise or
        printf("or, x %d \n", x|1);

        // Bitwise and
        printf("and, x %d \n", x&1);
}

int main()
{
        printChar();
        bitManipulation();
        return 0;
}
