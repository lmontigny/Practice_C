#include <stdio.h>
#define SIZE 15

int binarySearch( int a[], int searchQuery, int low, int high);

int main()
{
   int data[ SIZE ]; //create array data
   int i; //variable for counter
   int query; //search value
   int temp;

   //generate data for array
   for (i = 0; i < SIZE; ++i)
      data[ i ] = 2 * i;

   printf("Enter number to search: ");
   scanf("%d", &query);

   //calling binary search user defined function
   temp = binarySearch(data, query, 0, SIZE - 1);

   //display result
   if ( temp != -1)
      printf("%d found in array element: %d", query, temp);
   else
      printf("%d not found.", query);

   return 0;
}

//user defined function for binary search
int binarySearch(int a[], int searchQuery, int low, int high)
{
   int middle; //variable for storing middle value

   //while loop continue until low subscript is greater then higher
   while( low <= high )
   {
      middle = ( low + high ) / 2; //determines middle element

      //if search query is same as middle element, return middle
      if ( searchQuery == a[middle])
         return middle;

      //if search is less than middle, set new high
      else if ( searchQuery < a[middle])
         high = middle - 1; //search lowest end of the array

      //if search query is greater than middle, set new low
      else
         low = middle + 1;
   }

   return -1; //search value not found
}
