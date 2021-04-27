#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n) {
  int count1 = 0;
  int count2 = 0;
  if (n <= 0 || array == NULL) return EXIT_FAILURE;
  for(int i = 0; i < n; i++){
    if (array[i+1] > array[i]){
        count1++;
    }
    else if (array[i+1] < array[i]){
        count2 = count1;
        count1 = 0;
      }

  }  if (count2 > count1){
    return count2;
  }
  else return count1;
}
