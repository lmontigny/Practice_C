// Source: https://www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-8.php

int main()
{
    int num1, ctr = 0;
    num1 = 99;

    for (int n = num1 - 1; n >= 1; n--) 
    {
        for (int m = 2; m < n; m++) 
        {
            if (n % m == 0)
                ctr++;
        }
        if (ctr == 0) 
        {
            if (n == 1) 
            {
                printf("no prime number less than 2\n");
                break;
            }
            printf(" %d is the last prime number before %d \n ", n, num1);
            break;
        }
        ctr = 0;
    }
    return 0;
}
