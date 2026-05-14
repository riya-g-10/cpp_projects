#include <iostream>
using namespace std;

int main() {
    int num;
    float grade[100], sum = 0, average;

    cout << "Enter the number of subjects: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        cout << "Enter your grades of subject " << i + 1 << ": ";
        cin >> grade[i];
        sum = sum + grade[i];
    }

    average = sum / num;

    cout << "Average grade is = " << average << endl;

    return 0;
}