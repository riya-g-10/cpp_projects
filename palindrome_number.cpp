#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, rev = "";

    cout << "Enter a word or phrase: ";
    getline(cin, str);

    for(int i = str.length() - 1; i >= 0; i--) {
        rev = rev + str[i];
    }

    if(str == rev)
        cout << "It is a palindrome." << endl;
    else
        cout << "It is not a palindrome." << endl;

    return 0;
}