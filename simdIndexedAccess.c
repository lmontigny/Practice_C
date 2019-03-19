// Source: https://gain-performance.com/2017/06/15/umesimd-tutorial-9-gatherscatter-operations/

float a[LARGE_DATA_SIZE];
int indices[PROBLEM_SIZE];
uint32_t STRIDE = 4;
...
for(int i = 0; i < PROBLEM_SIZE; i+=8) {
  SIMDVec<float, 8> vec;
 
  // Here we are using precomputed indices,
  // but they can be computed on-the-fly if necessary.
  SIMDVec<uint32_t, 8> indices_vec(&indices[i];
 
  // 'load' the data to vec.
  vec.gather(&a[0], indices_vec);
  // do something useful
  vec += 3.14;
  // store the result at original locations
  vec.scatter(&a[0], indices_vec);
}
