File Edit Options Buffers Tools C Help                                                                                            
#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n) {
 size_t count1 = 1;
 size_t count2 = 1;
 if (n == 0) return 0;
 for(size_t i = 1; i < n; i++){
   if (array[i] > array[i-1]){
     count1++;
   }
   else {
     count1 = 1;
   }

   if (count1 > count2){
     count2 = count1;
   }}
 return count2;

}
