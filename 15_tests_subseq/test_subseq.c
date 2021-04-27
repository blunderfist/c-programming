File Edit Options Buffers Tools C Help                                                                                            
#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);

int main(void){

  int array1[] =  { 1, 2, 1, 3, 5, 7, 2, 4, 6, 9};
  int ans = maxSeq(array1, 10);
  if (ans != 4){
    printf("fail ans = %d\n", ans);
    return EXIT_FAILURE;
  }else {
      printf("sucess ans = %d\n", ans);  return EXIT_SUCCESS;
  }
}
