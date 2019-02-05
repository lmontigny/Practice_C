#include <stdio.h>

int main()
{
        int i,step,temp;
        int n = 10;
        int data[10] = { 3, -2, 7, 10, -5, 22, 1, 27, 25, 30};


        for(step=0;step<n-1;++step)
        {
                for(i=0;i<n-step-1;++i)
                {
                        if(data[i]>data[i+1])   /* To sort in descending order, change > to < in this line. */
                        {
                                temp=data[i];
                                data[i]=data[i+1];
                                data[i+1]=temp;
                        }
                }
        }
        printf("In ascending order: ");
        for(i=0;i<n;++i)
                printf("%d  ",data[i]);
        return 0;
}
