//Card.cpp
#include "Card.h"

//definition of argument constructor - sets rank and color to input, sets rank to value, and multiplies value by 2 if the color is orange
Card::Card(int rank, Color color) : rank{rank}, color{color} {
    if (color == orange) {
        value = rank*2;
    }
    if (color == purple) {
        value = rank;
    }
}

//definition of printCard function: returns a string with the color and rank
std::string Card::printCard() {
    std::string s;
    if (color == orange) {
        s = "orange";
    }
    if (color == purple) {
        s = "purple";
    }
    s = s + ":" + std::to_string(rank);
    return s;
}

//definition of getRank function: returns rank
int Card::getRank() {
    return rank;
}

//definition of getColor function: returns color
Card::Color Card::getColor() {
    return color;
}

//definition of getValue function: returns value
int Card::getValue() {
    return value;
}