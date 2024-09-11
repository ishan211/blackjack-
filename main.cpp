#include <random>    // RNG
#include <vector>    // vectors (dynamic arrays)
#include <list>      // making lists
#include <iostream>  // in out
#include <string>    // For strings

int main();
int main ()
{
    // Lists of all possible cards per suit
    std::list<std::string> hearts = {"2","3","4","5","6","7","8","9","10","11","12","13","A"};
    std::list<std::string> clubs = {"2","3","4","5","6","7","8","9","10","11","12","13","A"};
    std::list<std::string> spades = {"2","3","4","5","6","7","8","9","10","11","12","13","A"};
    std::list<std::string> diamonds = {"2","3","4","5","6","7","8","9","10","11","12","13","A"};
    
    // Vector for suits; for RNGing
    std::vector<int> suits = {1,2,3,4};
    
    /*
    // out vector & lists
    std::cout << "suits" << "\n";
    for (auto v : suits)
        std::cout << v << "\n";

    std::cout << "hearts" << "\n";
    for (auto v : hearts)
        std::cout << v << "\n";
    
    std::cout << "clubs" << "\n";
    for (auto v : clubs)
        std::cout << v << "\n";
    
    std::cout << "spades" << "\n";
    for (auto v : spades)
        std::cout << v << "\n";
    
    std::cout << "diamonds" << "\n";
    for (auto v : diamonds)
        std::cout << v << "\n";
    */

    // Calculate the total number of cards (52 in a deck: 13 in each suit)
    int total_cards = diamonds.size() + spades.size() + hearts.size() + clubs.size();
    
    // Seeding the random number generator and choosing a random suit
    srand((unsigned) time(NULL));  // Seed the random generator with current time
	int suit_rdm = (rand() % 101); // Generate a random number between 0 and 100
    std::string selected_suit;     // To store the selected suit

    // Determine which suit to pick based on the random number generated
    if (suit_rdm > 0 && suit_rdm <= 25){
        selected_suit = "Hearts";  // If random number is between 1 and 25
        //std::cout << "selected suit is " << selected_suit << std::endl;
    } else if (suit_rdm > 25 && suit_rdm <= 50){
        selected_suit = "Clubs";   // If random number is between 26 and 50
        //std::cout << "selected suit is " << selected_suit << std::endl;
    } else if (suit_rdm > 50 && suit_rdm <= 75){
        selected_suit = "Spades";  // If random number is between 51 and 75
        //std::cout << "selected suit is " << selected_suit << std::endl;
    } else if (suit_rdm > 75 && suit_rdm <= 100){
        selected_suit = "Diamonds"; // If random number is between 76 and 100
        //std::cout << "selected suit is " << selected_suit << std::endl;
    } else{
        // In case of an unexpected number, exit the program
        std::cout << "Failed; Exiting Program";
        return 0;
    }

    //std::cout << selected_suit;  // Output the selected suit (commented out)
    
    // Generate a random card number between 1 and 13 to select a card from the suit
    srand((unsigned) time(NULL));   // Seed the random number generator again
	int card_rdm = 1 + (rand() % 14);  // Random number from 1 to 13 (representing card rank)

    // Output the drawn card (random card number and selected suit)
    std::cout << "Card Drawn is " << card_rdm << " of " << selected_suit;
}
