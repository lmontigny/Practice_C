//Source: https://stackoverflow.com/questions/5580761/why-use-double-pointer-or-why-use-pointers-to-pointers
// if you use single pointer to the example bellow (e.g. alloc1() )
// you will loose the reference to the memory allocated inside the function

void alloc2(int** p) {
   *p = (int*)malloc(sizeof(int));
   **p = 10;
}

void alloc1(int* p) {
   p = (int*)malloc(sizeof(int));
   *p = 10;
}

int main(){
   int *p = NULL;
   alloc1(p);
   //printf("%d ",*p);//undefined
   alloc2(&p);
   printf("%d ",*p);//will print 10
   free(p);
   return 0;
}
