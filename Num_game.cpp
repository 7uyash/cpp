#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Seed for random number
    int randomNum = std::rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    
    std::cout << "Guess the number between 1 and 100: ";

    do {
        std::cin >> guess;
        if (guess > randomNum) {
            std::cout << "Too high! Try again: ";
        } else if (guess < randomNum) {
            std::cout << "Too low! Try again: ";
        }
    } while (guess != randomNum);
    
    std::cout << "Congrats, you guessed it!";
    
    return 0;
}
