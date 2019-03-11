#include <setjmp.h>

jmp_buf buf;
#include <setjmp.h>
banana() {
  printf("in banana()\n");
  longjmp(buf, 1);
  /*NOTREACHED*/
  printf("you'll never see this, because I longjmp'd");
}

main()
{
  if (setjmp(buf))
    printf("back in main\n");
  else {
    printf("first time through\n");
    banana();
  }
}


/*
% a.out
first time through
in banana()
back in main
*/
