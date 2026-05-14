#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct Item {
    int id;
    string name;
    int quantity;

    void display() const {
        cout << "ID: " << id << " | Name: " << name 
             << " | Qty: " << quantity << endl;
    }
};

class Inventory {
private:
    vector<Item> items;

public:
    void addItem() {
        Item newItem;
        cout << "Enter Item ID: ";
        cin >> newItem.id;
        cin.ignore(); 
        cout << "Enter Item Name: ";
        getline(cin, newItem.name);
        cout << "Enter Quantity: ";
        cin >> newItem.quantity;

        items.push_back(newItem);
        cout << "Item added successfully!\n";
    }

    void displayAll() {
        if (items.empty()) {
            cout << "Inventory is empty.\n";
            return;
        }
        cout << "\n--- Current Inventory ---\n";
        for (const auto& item : items) {
            item.display();
        }
    }

    void searchById(int searchId) {
        for (const auto& item : items) {
            if (item.id == searchId) {
                cout << "Item Found: ";
                item.display();
                return;
            }
        }
        cout << "Item with ID " << searchId << " not found.\n";
    }

    void searchByName(string searchName) {
        bool found = false;
        for (const auto& item : items) {
            if (item.name == searchName) {
                item.display();
                found = true;
            }
        }
        if (!found) cout << "No items found with name: " << searchName << endl;
    }
};

int main() {
    Inventory myStore;
    int choice;

    do {
        cout << "\n1. Add Item\n2. Display All\n3. Search by ID\n4. Search by Name\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: myStore.addItem(); break;
            case 2: myStore.displayAll(); break;
            case 3: {
                int id;
                cout << "Enter ID to search: ";
                cin >> id;
                myStore.searchById(id);
                break;
            }
            case 4: {
                string name;
                cout << "Enter Name to search: ";
                cin.ignore();
                getline(cin, name);
                myStore.searchByName(name);
                break;
            }
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } 
    while (choice != 5);

    return 0;
}