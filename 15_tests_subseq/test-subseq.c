#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);

int main(void){

  int array1[] = {1, 2, 1, 3, 5, 7, 2, 4, 6, 9};
  int array2[] = {-1};
  int array3[] = {1,2,2,3};
  int array4[] = {5,-3,2,3};
  int array5[] = {1,2,3,4};
  int array6[] = {5,4,3,2};

  if (maxSeq(NULL, 0) != 0 ){
    printf("failed null\n");
    return EXIT_FAILURE;
  }

  if (maxSeq(array1, 10) != 4){
    printf("Failed 1\n");
    return EXIT_FAILURE;
  }

  if (maxSeq(array2, 1) != 1){
    printf("failed 2\n");
    return EXIT_FAILURE;
  }

  if (maxSeq(array3, 4) != 2){
    printf("Failed 3");
    return EXIT_FAILURE;
   }
  
    if (maxSeq(array4, 4) != 3){
    printf("failed 4\n");
    return EXIT_FAILURE;
   }

  if (maxSeq(array5, 4) != 4){
    printf("Failed 5");
    return EXIT_FAILURE;
  }

  else {
    return EXIT_SUCCESS;
  }
}
