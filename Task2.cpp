#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    // Seed for the random number generator
    srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int userguess;
    int attempt = 0;

    cout<< "Welcome to the Number Guessing Game!\n";
    cout<< "Try to guess the number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> userguess;

        attempt++;

        if (userguess == randomNumber) {
            cout << "Congratulations! You guessed correct number in " << attempt << " attempts.\n";
        } else if (userguess < randomNumber) {
            cout << "Too low!! Try again.\n";
        } else {
            cout << "Too high!! Try again.\n";
        }

    } while (userguess != randomNumber);

    return 0;
}
