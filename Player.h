//Player.h

#ifndef PLAYER_H_
#define PLAYER_H_

//Player class
class Player
{
    //creates hand object for the player and an integer to keep track of their score
    public:
        Hand hand;
        int score {0};

    //uses argument constructor to create the hand with the deck and number of cards to put into the hand as inputs
    public:
        Player() = default;
        Player(Deck &deck, int N) : hand(deck, N) {}
};
  

#endif // PLAYER_H_
