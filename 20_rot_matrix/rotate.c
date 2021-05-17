File Edit Options Buffers Tools C Help                                                                                                 
#include <stdio.h>
#include <stdlib.h>

void rotate(char matrix[10][10]){
 char  new_matrix[10][10];
 if (matrix != NULL){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      new_matrix[i][j] = matrix[9-j][i];

    }

  }
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      matrix[i][j] = new_matrix[i][j];
    }
  }
 }
}
