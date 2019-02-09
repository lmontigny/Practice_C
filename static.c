#include<stdio.h> 
int fun() 
{ 
  static int count = 0; 
  count++; 
  return count; 
} 
   
int main() 
{ 
  printf("%d ", fun()); 
  printf("%d ", fun()); 
  return 0; 
}


// in .data segment, not stack
// init at 0 if not explicit
// initialized using constant literals. 
