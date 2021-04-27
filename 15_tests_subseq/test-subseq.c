#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);

int main(void){

  int array1[] = {1, 2, 1, 3, 5, 7, 2, 4, 6, 9};
  int array2[] = {-1, -2, -3, -4};
  int array3[] = {-1};
  int array4[] = {1,2,2,3};
  int array5[] = {0};
  int array6[] = {1,2,3,2,3,2,3,4,2,3,2,3,4,5,2,3,2};
  int array7[] = {5,4,3,2};

  if (maxSeq(array1, 10) != 4){
    printf("Failed on array1");
    return EXIT_FAILURE;
  }
  if (maxSeq(array2, 4) != 1){
    printf("Failed array2");
    return EXIT_FAILURE;
  }
  if (maxSeq(array3, 1) != 1){
    printf("Failed array3");
    return EXIT_FAILURE;
  }

  if (maxSeq(array4, 4) != 2){
    printf("Failed array4");
    return EXIT_FAILURE;
  }
  
    if (maxSeq(array5, 1) != 1){
    printf("Failed array5");
    return EXIT_FAILURE;
  }

  if (maxSeq(array6, 17) != 4){
    printf("Failed array6");
    return EXIT_FAILURE;
  }

  if (maxSeq(array7, 4) != 1){
    printf("failed array7");
    return EXIT_FAILURE;
  }
   
  else {
    printf("Success\n");
    return EXIT_SUCCESS;
  }
}
