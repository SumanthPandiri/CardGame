//Hand.cpp
#include "Hand.h"

//argument constructor that draws the input number of cards to the hand out of the deck
Hand::Hand(Deck &deck, int N) {
    for (int i = 0; i < N; i++) {
        hand.push_back(deck.drawCard());
    }
} 

//function definition for printHand: combines all cards of the hand into a string and prints it
std::string Hand::printHand() {
    std::string w;
    for (long unsigned int i = 0; i < hand.size(); i++) {
        w = w + "[" + std::to_string(i + 1) + "] " + hand[i].printCard() + " ";
    }
    return w;
}

//function definition for dealCard: returns the card chosen and erases it from the deck
Card Hand::dealCard(int num) {
    Card w = hand[num-1];
    hand.erase(hand.begin() + num-1);
    return w;
}

//function definition for getHandSize: returns hand size
int Hand::getHandSize() {
    return hand.size();
}