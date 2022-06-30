//Card.h
#ifndef CARD_H_
#define CARD_H_

#include <string>

//defining the Card class
class Card
{
    //creating variables rank and value for the number on the card and value of the card
    private: 
    int rank {0};
    int value {0};
    
    //creating an enum to separate cards into orange and purple
    public:
    enum Color {orange, purple};

    //creating a specific enum for the individual card
    private:
    Color color {purple};

    //function and constructor prototypes
    public:
    Card() = default;
    Card(int rank, Color color);
    std::string printCard();
    int getRank();
    Color getColor();
    int getValue();

};
  

#endif // CARD_H_
