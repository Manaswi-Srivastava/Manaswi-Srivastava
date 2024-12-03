
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;
    int numberOfTries = 0;

    cout << "Welcome to the number guessing game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    while (true) {
        int guess;
        cout << "Enter your guess: ";
        cin >> guess;
        numberOfTries++;

        if (guess < numberToGuess) {
            cout << "Too low!" << endl;
        } else if (guess > numberToGuess) {
            cout << "Too high!" << endl;
        } else {
            cout << "Congratulations! You found the number in " << numberOfTries << " tries." << endl;
            break;
        }
    }

    return 0;
}
