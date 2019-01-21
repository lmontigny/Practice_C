#include <stdio.h>

int main(void)
{
    int p1[10];
    int *p2[10];
    int (*p3)[10];

    printf("sizeof(int)   = %d\n", (int)sizeof(int));
    printf("sizeof(int *) = %d\n", (int)sizeof(int *));
    printf("sizeof(p1)    = %d\n", (int)sizeof(p1));
    printf("sizeof(p2)    = %d\n", (int)sizeof(p2));
    printf("sizeof(p3)    = %d\n", (int)sizeof(p3));

    return 0;
}


/*
sizeof(int)   = 4
sizeof(int *) = 8
sizeof(p1)    = 40
sizeof(p2)    = 80
sizeof(p3)    = 8

Note:
int (*p)[10];   => p is a pointer to an array of 10 consecutive memory blocks (each can store data of type int) 
Equivalent: *p, *(p+0), *(0+p), p[0]
*/
