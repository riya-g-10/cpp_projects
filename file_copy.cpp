#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFile, destinationFile;
    char ch;

    cout << "Enter the name of source file: ";
    cin >> sourceFile;

    cout << "Enter the name of destination file: ";
    cin >> destinationFile;

    ifstream source(sourceFile);
    ofstream dest(destinationFile);

    if(!source) {
        cout << "Error opening source file." << endl;
        return 1;
    }

    while(source.get(ch)) {
        dest.put(ch);
    }

    cout << "File copied successfully." << endl;

    source.close();
    dest.close();

    return 0;
}