#include <stdio.h>

#define TEST(cond) \
    if(cond){ \
    printf("Function: %s \n", __FUNCTION__); \
    printf("File: %s \n", __FILE__); \
    printf("Line: %i \n", __LINE__); \
    }

#define RETEST(cond, ...) \
    if(cond){ \
        printf("%i %i \n", __VA_ARGS__); \
    } 

int main()
{
    printf("Hello World");

    TEST(1);
    RETEST(1, 12, 25);
    
    return 0;
}
