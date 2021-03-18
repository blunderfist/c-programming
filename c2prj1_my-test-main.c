#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "cards.h"

int main(void) {
  card_t myCard;
  myCard.value = 4;
  myCard.suit = SPADES;
  assert_card_valid(myCard);
  printf("%d", myCard.value);
  printf("%d\n", myCard.suit);
  printf("success if 4 of Spades (0)\n\n");

  print_card(myCard);
  printf("success if 4 of Spades\n\n");
  card_t newCard;
  newCard = card_from_letters('2','d');
  print_card(newCard);
  printf("success if 2 of diamonds \n\n");

  card_t nextCard;
  nextCard = card_from_num(0);
  print_card(nextCard);
  printf("success if King of Spades\n\n");

  return 0;
}
