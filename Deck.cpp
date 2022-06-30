//Deck.cpp
#include "Deck.h"

//Default constructor definition: creates 10 orange and purple cards with ranks 1-10
Deck::Deck() {
    for (int i = 1; i < 11; i++) {
        deck.push_back(Card(i, Card::orange));
    }
    for (int i = 1; i < 11; i++) {
        deck.push_back(Card(i, Card::purple));
    }
}

//function definition for shuffle: shuffles the deck
void Deck::shuffle() {
    srand(unsigned(time(0)));
    std::random_shuffle(deck.begin(), deck.end());
}

//function definition for drawCard: draws a card and returns it and removes it from the deck
Card Deck::drawCard() {
    Card o = deck[0];
    deck.erase(deck.begin());
    return o;
    
}

//function for getDeckSize: returns the size of deck
int Deck::getDeckSize() {
    return deck.size();
}






