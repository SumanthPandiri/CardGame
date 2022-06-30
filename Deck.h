//Deck.h
#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "Card.h"

//defining the Deck class
class Deck
{
    //creating a vector of cards for the deck
    private:
    std::vector<Card> deck;

    //function and constructor prototypes 
    public:
    Deck();
    void shuffle();
    Card drawCard();
    int getDeckSize();
    
};
  

#endif // DECK_H_
