#include <stdio.h>
#include <stdlib.h>

void quickSort(int number[10], int first, int last){

        int i, j, pivot, temp;

        if(first<last){
                pivot=first;
                i=first;
                j=last;

                while(i<j){
                        while(number[i]<=number[pivot]&&i<last)
                                i++;
                        while(number[j]>number[pivot])
                                j--;
                        if(i<j){
                                temp=number[i];
                                number[i]=number[j];
                                number[j]=temp;
                        }
                }

                temp=number[pivot];
                number[pivot]=number[j];
                number[j]=temp;
                quickSort(number,first,j-1);
                quickSort(number,j+1,last);

        }
}

int main()
{
        int n = 10;
        int arr[] = {9, 8, 12, 23, 34, 4, 1, 6, 88, 92};
        quickSort(arr, 0, n);

        for(int i = 0; i<n; i++){
                printf("arr %d \n", arr[i]);
        }

        return 0;
}
