#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "deck.h"

void print_hand(deck_t * hand){
  for(int i = 0; i < (hand->n_cards); i++){
    print_card(*(hand->cards)[i]);
  }
}

int deck_contains(deck_t * d, card_t c){
  for(int i = 0; i < d->n_cards; i++){
    if(((((d->cards)[i])->value) == c.value) && ((((d->cards)[i])->suit) == c.suit)) return 1;
  }
  return 0;
}


void shuffle(deck_t * d){
  //num = (rand() % (upper – lower + 1)) + lower                                                                                       
  int upper = d->n_cards;
  int rand_num = rand();
  int rando;
  card_t **card = d->cards;
  card_t *temp;
  for(int i = 0; i < upper; i++){
    rando = rand_num % (upper - i);
    temp = card[i];
    card[i] = card[rando];
    card[rando] = temp;
  }
}

void assert_full_deck(deck_t * d) {
  // check deck has 52 cards                                                                                                           
  assert(d->n_cards == 52);

  //check each card is in deck                                                                                                         
  for(int i = 0; i < d->n_cards; i++){
    assert(deck_contains(d, card_from_num(i)));
  }
}
