#include <iostream>
using namespace std;

// Class for inventory management
class ShopInventory {
    private:
        string itemName[100];
        int itemID[100];
        int itemStock[100];
        float itemPrice[100];
        int counter;

    public:
        ShopInventory() {
            counter = 0;
        }

        void addItem() {
            cout << "Enter item name: ";
            cin >> itemName[counter];
            cout << "Enter item ID: ";
            cin >> itemID[counter];
            cout << "Enter item stock: ";
            cin >> itemStock[counter];
            cout << "Enter item price: ";
            cin >> itemPrice[counter];
            counter++;
            cout << "Item added successfully!\n\n";
        }

        void removeItem(int id) {
            for(int i = 0; i < counter; i++) {
                if(itemID[i] == id) {
                    for(int j = i; j < counter - 1; j++) {
                        itemName[j] = itemName[j + 1];
                        itemID[j] = itemID[j + 1];
                        itemStock[j] = itemStock[j + 1];
                        itemPrice[j] = itemPrice[j + 1];
                    }
                    counter--;
                    cout << "Item removed successfully!\n\n";
                    return;
                }
            }
            cout << "Item with ID " << id << " not found!\n\n";
        }

        void updateStock(int id, int newStock) {
            for(int i = 0; i < counter; i++) {
                if(itemID[i] == id) {
                    itemStock[i] = newStock;
                    cout << "Stock updated successfully!\n\n";
                    return;
                }
            }
            cout << "Item with ID " << id << " not found!\n\n";
        }

        void displayInventory() {
            if(counter == 0) {
                cout << "Inventory is empty!\n\n";
                return;
            }
            cout << "ID\tName\tStock\tPrice\n";
            for(int i = 0; i < counter; i++) {
                cout << itemID[i] << "\t" << itemName[i] << "\t" << itemStock[i] << "\t$" << itemPrice[i] << endl;
            }
            cout << endl;
        }
};

// Main function to test the inventory management system
int main() {
    ShopInventory shop;

    int choice, id, newStock;
    cout << "Welcome to Shop Inventory Management System!\n";
    do {
        cout << "1. Add item\n2. Remove item\n3. Update stock\n4. Display inventory\n5. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                shop.addItem();
                break;
            case 2:
                cout << "Enter ID of item to remove: ";
                cin >> id;
                shop.removeItem(id);
                break;
            case 3:
                cout << "Enter ID of item to update stock: ";
                cin >> id;
                cout << "Enter new stock value: ";
                cin >> newStock;
                shop.updateStock(id, newStock);
                break;
            case 4:
                shop.displayInventory();
                break;
            case 5:
                cout << "Exiting inventory management system...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n\n";
                break;
        }
    } while(choice != 5);

    return 0;
}
