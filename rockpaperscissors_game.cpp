#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int userChoice, pcChoice;

    cout << "Rock Paper Scissors Game\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice: ";
    cin >> userChoice;

    srand(time(0));
    pcChoice = rand() % 3 + 1;

    cout << "Computer chose: ";
    if(pcChoice == 1)
        cout << "Rock\n";
    else if(pcChoice == 2)
        cout << "Paper\n";
    else
        cout << "Scissors\n";

    if(userChoice == pcChoice)
        cout << "It's a Draw!\n";
    else if((userChoice == 1 && pcChoice == 3) ||
            (userChoice == 2 && pcChoice == 1) ||
            (userChoice == 3 && pcChoice == 2))
        cout << "You Win!\n";
    else
        cout << "Computer Wins!\n";

    return 0;
}