// Source: https://gain-performance.com/2017/06/15/umesimd-tutorial-9-gatherscatter-operations/

float a[LARGE_DATA_SIZE];
uint32_t STRIDE = 8;
...
for(int i = 0; i < PROBLEM_SIZE; i+=8) {
  SIMDVec<float, 8> vec;
 
  // Note that we have to scale the loop index.
  int offset = i*STRIDE;
 
  // 'load' the data to vec.
  vec.gather(&a[offset], STRIDE);
  // do something useful
  vec += 3.14;
  // store the result at original locations
  vec.scatter(&a[offset], STRIDE);
}
