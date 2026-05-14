#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int guess, number;
    srand(time(0));
    number = rand() % 100 + 1;
    cout << "Guess the number between 1 and 100" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if(guess > number)
            cout << "Lower number please!" << endl;

        else if(guess < number)
            cout << "Higher number please!" << endl;

        else
            cout << "You guessed the Correct number!" << endl;

    } 
    while(guess != number);

    return 0;
}