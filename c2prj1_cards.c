File Edit Options Buffers Tools C Help                                                                                  
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"

//check for valid value ranges of card                                                                                  
void assert_card_valid(card_t c) {
  assert((c.value >= 2) && (c.value <= VALUE_ACE));
  assert((c.suit >= CLUBS) && (c.suit <= SPADES));
}

//rank hands                                                                                                            
const char * ranking_to_string(hand_ranking_t r) {
  switch(r){
  case STRAIGHT_FLUSH: return "STRAIGHT_FLUSH";
  case FOUR_OF_A_KIND: return "FOUR_OF_A_KIND";
  case FULL_HOUSE: return "FULL_HOUSE";
  case FLUSH: return "FLUSH";
  case STRAIGHT: return "STRAIGHT";
  case THREE_OF_A_KIND: return "THREE_OF_A_KIND";
  case TWO_PAIR: return "TWO_PAIR";
  case PAIR: return "PAIR";
  case NOTHING: return "NOTHING";
  default: return "NO_SUCH_COMBINATION";
  }
}

//assign number values to card values                                                                                   
char value_letter(card_t c) {
  switch(c.value){
  case 2: return '2';
  case 3: return '3';
  case 4: return '4';
  case 5: return '5';
  case 6: return '6';
  case 7: return '7';
  case 8: return '8';
  case 9: return '9';
  case 10: return '0';
  case VALUE_JACK: return 'J';
  case VALUE_QUEEN: return 'Q';
  case VALUE_KING: return 'K';
  case VALUE_ACE: return 'A';
  default: return '?';
  }
}

//assign suit letter to suit values                                                                                     
char suit_letter(card_t c) {
  switch(c.suit){
  case SPADES: return 's';
  case HEARTS: return 'h';
  case DIAMONDS: return 'd';
  case CLUBS: return 'c';
  default:  return '?';
  }
}

void print_card(card_t c) {
  char c_value, c_suit;
  c_value = value_letter(c);
  c_suit = suit_letter(c);
  printf("%c%c",c_value, c_suit);
}

//make a card from 2 inputs                                                                                             
card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  switch(value_let){
    case '2': temp.value = 2; break;
  case '3': temp.value = 3; break;
  case '4': temp.value = 4; break;
  case '5': temp.value = 5; break;
  case '6': temp.value = 6; break;
  case '7': temp.value = 7; break;
  case '8': temp.value = 8; break;
  case '9': temp.value = 9; break;  case '0': temp.value = 10; break;
  case 'J': temp.value = VALUE_JACK; break;
  case 'Q': temp.value = VALUE_QUEEN; break;
  case 'K': temp.value = VALUE_KING; break;
  case 'A': temp.value = VALUE_ACE; break;
  }
  switch(suit_let){
  case 's': temp.suit = SPADES;
    break;
  case 'h': temp.suit = HEARTS;
    break;
  case 'd': temp.suit = DIAMONDS;
    break;
  case 'c': temp.suit = CLUBS;
    break;
  }
  assert_card_valid(temp);
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  //assign a suit to value c based on number value                                                                      
  int v;
  int s;
  v = c%13;
  s = c/13;

  if (v >= 2) {
    temp.value = v;
  }
  else {
    temp.value = v + 13;
  }

  switch(s){
  case 0: temp.suit = SPADES;
    break;
  case 1: temp.suit = HEARTS;
    break;
  case 3: temp.suit = DIAMONDS;
    break;
  case 4: temp.suit = CLUBS;
    break;
  }

  return temp;
}


