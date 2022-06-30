#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main()
{
    //initialization of objects and variables
    Deck deck;
    int a = 0;
    int rounds = 0;
    int choice = 0;
    Card H1;
    Card H2;
    deck.shuffle();
    bool playAgain = true;

    //iterates the whole game in a loop if they want to play again
    while (playAgain) {

    //takes input for number of rounds the user wants to play
    std::cout << "Welcome to TigerGame!" << std::endl << "How many rounds would you like to play (max = 10)? ";
    std::cin >> rounds;
    //makes sure they enter a valid input
    while (rounds < 1 || rounds > 10) {
        std::cout << "Please enter a valid number of rounds (between 1 and 10): ";
        std::cin >> rounds;
    }

    //creates the player objects and hands
    Player P1(deck, rounds);
    Player P2(deck, rounds);

    //outputs the number of rounds
    std::cout << "The deck was shuffled and each player has drawn " << rounds << " cards." << std::endl << std::endl;
    
    //loops through the game for each round
    for(int i = 0; i < rounds; i++) {
        //lets the user know what round they are on
        std::cout << "Round " << i+1 << std::endl << "-------" << std::endl;

        //deals the computer's card and outputs it and the user's hand to the user
        H1 = P1.hand.dealCard(1);
        std::cout << "The computer plays: " << H1.printCard() << std::endl;
        std::cout << "Your hand: " << P2.hand.printHand() << std::endl;

        //takes input for the card they want to play
        std::cout << "Which hand do you want to play? ";
        std::cin >> choice;
        //performs input validation to make sure the hand they enter is valid
        while (choice < 1 || choice > P2.hand.getHandSize())
        {
            std::cout << "Please enter a valid choice: ";
            std::cin >> choice;
        }

        //deals the card they picked and outputs it to screen
        H2 = P2.hand.dealCard(choice);
        std::cout << "You played: " << H2.printCard() << std::endl;

        //outputs who won the round and updates the corresponding score based on who had the better hand
        if (H2.getValue() > H1.getValue()) {
            std::cout << "You win this round!" << std::endl << std::endl;
            P2.score = H2.getValue() + H1.getValue();
        }
        if (H1.getValue() > H2.getValue()) {
            std::cout << "The computer wins this round!" << std::endl << std::endl;
            P1.score = H2.getValue() + H1.getValue();
        }
        if (H2.getValue() == H1.getValue()) {
            std::cout << "Tie!" << std::endl << std::endl;
        }
    
        //outputs the current scores to the screen
        std::cout << "Current scores:" << std::endl << "Human: " << P1.score << std::endl;
        std::cout << "Computer: " << P2.score << std::endl << std::endl;
        
    }
    
    //outputs the final scores to screen
    std::cout << "FINAL SCORE: " << "Human: " << P2.score << std::endl;
    std::cout << "Computer: " << P1.score << std::endl;

    //outputs who won based on who had the higher score
    if (P1.score > P2.score) {
        std::cout << "Computer has won!" << std::endl;
    }
    if (P1.score == P2.score) {
        std::cout << "You tied with the computer!" << std::endl;
    }
    if (P1.score < P2.score) {
        std::cout << "Human has won!" << std::endl;
    }

    //asks the user if he/she wants to play again
    std::cout << "Would you like to play again(1 for Yes, 2 for No)? ";
    std::cin >> a;
    //performs input validation for their answer
    while (a < 1 || a > 2)
        {
            std::cout << "Please enter a valid answer: ";
            std::cin >> a;
        }
    
    //sets playAgain to true/false depending on their answer
    if (a == 1) {
        playAgain = true;
        std::cout << std::endl;
    }
    if (a == 2) {
        playAgain = false;
    }
    }

    return 0;
}
