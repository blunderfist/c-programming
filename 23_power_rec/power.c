#include <stdlib.h>
#include <stdio.h>

unsigned power(unsigned x, unsigned y){
  if(x == 0 && y == 0) return 1;
  if(x == 0) return 0;
  if(y == 0) return 1;
  if(y <= 1) return x;
  else{
    unsigned power_next = power(x, y-1);
    return x * power_next;
  }
}

//int main(void){                                                                                                                      
  //  if(power(4, 2) == 16){                                                                                                           
  //  printf("success, %d is answer\n", power(4,2));                                                                                   
  //  EXIT_SUCCESS;                                                                                                                    
  //  }                                                                                                                                
  //else{                                                                                                                              
  //  printf("didn't work, answer is %d", power(4,2));                                                                                 
  //  EXIT_FAILURE;                                                                                                                    
  //}                                                                                                                                  
//} 
