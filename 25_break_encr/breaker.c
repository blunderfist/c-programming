#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

int process_array(int *counts){
  int most_freq = counts[0];
  int idx = 0;
  /*keep running total, whatever has greatest count = e                                                                       
   find numeric difference and return as output*/
  for(int i = 0; i < 26; i++){
    if(counts[i] > most_freq){
      most_freq = counts[i];
      idx = i;
    }}
  int key = ((idx + 26+'a'-'e')%26);
  return key;
}

void get_chars(FILE * f, int *counts){
  //  int counts[26] = {0};                                                                                                   
  int c;
  /*build array of chars and associated counts*/
  while((c = fgetc(f)) != EOF){
      if(isalpha(c)){
        c = tolower(c);
        c = c - 'a';
        counts[c] ++;
      }}
  //int ans_key = process_array(counts);                                                                                      
  //return ans_key;                                                                                                           
}

int main (int argc, char **  argv){
  //printf("testing: this program is called %s\n", argv[0]);                                                                  
  //printf("It will print the caeser cipher shift for this file: %s\n", argv[1]);                                             
  if(argc != 2){
    fprintf(stderr, "Enter a text file to decrypt\n");
    return EXIT_FAILURE;
  }

  FILE * f = fopen(argv[1], "r");
  
  if (f == NULL){
    fprintf(stderr, "There was an error opening the file\n");
    return EXIT_FAILURE;
    }
  int counts [26] = {0};
  get_chars(f, counts);
  int most_freq = process_array(counts);
  fprintf(stdout, "%d\n", most_freq);

  if(!feof(f)) {
    fprintf(stderr, "Didn't reach end of file\n");
    return EXIT_FAILURE;
  } else if(ferror(f)) {
    fprintf(stderr, "Error reading input\n");
    return EXIT_FAILURE;
  }

    if (fclose(f) != 0) {
    perror("Failed to close the input file\n");
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
