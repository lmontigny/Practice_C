typedef double (*myFunction)(int, int);

double apply(myFunction f, int foo, int bar){
  return f(foo,bar);
}
