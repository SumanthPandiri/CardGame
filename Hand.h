//Hand.h
#ifndef HAND_H_
#define HAND_H_

#include <vector>
#include <string>
#include <sstream>
#include "Deck.h"

//class for the Hand
class Hand
{
    //creates a card vector for the hand
    private:
    std::vector<Card> hand;

    //function and constructor prototypes
    public:
    Hand() = default;
    Hand(Deck &deck, int N); 
    std::string printHand();
    Card dealCard(int num);
    int getHandSize();
};

#endif // HAND_H_
