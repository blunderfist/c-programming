#include<stdio.h>
#include<stdlib.h>

struct _retire_info {
  int months;
  double contribution;
  double rate_of_return;
}; typedef struct _retire_info retire_info;

double calc (int startAge, double balance, retire_info info) {
  for(int i = 0; i < info.months; i++) {
    printf("Age %3d month %2d you have $%.2f\n", ((startAge + i)/12), ((startAge + i)%12), balance);
    balance = balance + (balance * info.rate_of_return);
    balance = balance + info.contribution;
  }
  return balance;
}

void retirement (int start, double init, retire_info working, retire_info retired) {
  //calc(start, init, working);                                                                                         
    double bal;
    bal = calc(start, init, working);
    calc(start + working.months, bal, retired);
}

int main (void) {
  int startAge;
  double initial;
  startAge = 327;
  initial = 21345;
  
   retire_info working;
  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 0.045/12;

  retire_info retired;
  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return = 0.01/12;
  retirement(startAge, initial, working, retired);

  return EXIT_SUCCESS;
}
