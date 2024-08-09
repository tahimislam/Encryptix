#include <bits/stdc++.h>
using namespace std;

// Function to generate a random number between 1 and 100
int generateRandomNumber() {
    return rand() % 100 + 1;
}

// Function to play the number guessing game
void playNumberGuessingGame() {
    int randomNumber = generateRandomNumber();
    int guess;
    bool guessedCorrectly = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have generated a number between 1 and 100. Try to guess it!" << endl;

    while (!guessedCorrectly) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
            guessedCorrectly = true;
        }
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator
    playNumberGuessingGame();
    return 0;
}

