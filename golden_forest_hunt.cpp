#include <iostream>
#include <cstdlib>
#include <ctime>

int generateChest() {
    return std::rand() % 4 + 1;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int score = 0;
    int rounds = 6;

    std::cout << "=== Golden Forest Hunt ===\n";

    for (int i = 1; i <= rounds; ++i) {
        int luckyChest = generateChest();
        int choice;

        std::cout << "\nRound " << i << "\n";
        std::cout << "Choose a chest (1-4): ";
        std::cin >> choice;

        if (choice == luckyChest) {
            std::cout << "You found gold!\n";
            score += 12;
        } else {
            std::cout << "The chest was empty.\n";
            score += 2;
        }
