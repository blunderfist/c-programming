#include <stdio.h>
#include <stdlib.h>

unsigned power(unsigned x, unsigned y);

void run_check(unsigned x, unsigned y, unsigned expected_ans){
  if(power(x,y) != expected_ans){
    printf("Failed: %d to %d is not %d\n", x, y, expected_ans);
    exit(EXIT_FAILURE);
  }
}

int main(void){
  run_check(0,0,1);
  run_check(1,1,1);
  run_check(-1,3,-1);
  run_check(4,4,256);
  run_check(5,0,1);

  EXIT_SUCCESS;
  }
