#include <random> //RNG
#include <vector> //Vectors (Dynamic arr)
#include <list> //making ls
#include <iostream> //in out
#include <string> //for strings

// Function to deal n cards
void deal(int n) {
    std::list<std::string> hearts = {"2","3","4","5","6","7","8","9","10","11","12","13","A"};
    std::list<std::string> clubs = {"2","3","4","5","6","7","8","9","10","11","12","13","A"};
    std::list<std::string> spades = {"2","3","4","5","6","7","8","9","10","11","12","13","A"};
    std::list<std::string> diamonds = {"2","3","4","5","6","7","8","9","10","11","12","13","A"};
    std::vector<int> suits = {1, 2, 3, 4};

    int total_cards = diamonds.size() + spades.size() + hearts.size() + clubs.size();

    srand((unsigned) time(NULL));

    for (int i = 0; i < n; ++i) {
        int suit_rdm = (rand() % 101);
        std::string selected_suit;

        if (suit_rdm > 0 && suit_rdm <= 25) {
            selected_suit = "Hearts";
        } else if (suit_rdm > 25 && suit_rdm <= 50) {
            selected_suit = "Clubs";
        } else if (suit_rdm > 50 && suit_rdm <= 75) {
            selected_suit = "Spades";
        } else if (suit_rdm > 75 && suit_rdm <= 100) {
            selected_suit = "Diamonds";
        } else {
            std::cout << "Failed; Exiting Program";
            return;
        }

        int card_rdm = 1 + (rand() % 14);
        std::cout << "Card " << i + 1 << " Drawn: " << card_rdm << " of " << selected_suit << std::endl;
    }
}

int main() {
    int num_cards;
    //std::cout << "Enter the number of cards to deal: "; For Debug, When done mv to dbg sec
    //std::cin >> num_cards; For Debug, When done mv to dbg sec
    //deal(num_cards); For Debug, When done mv to dbg sec
    
    //Start Game
    deal(2);
    return 0;
}

/* Debugging:
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
    std::cout << "random suit is " << suit_rdm << std::endl;
    std::cout << "total num of cards is " << total_cards << std::endl;
    std::cout << "selected suit is " << selected_suit << std::endl;
*/
