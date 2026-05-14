#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, temp;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Choose the sorting order:\n";
    cout << "1. Ascending\n";
    cout << "2. Descending\n";
    cin >> choice;

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(choice == 1 && arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else if(choice == 2 && arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted array is:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}