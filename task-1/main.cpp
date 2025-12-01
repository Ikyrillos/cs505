#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    LinkedList list;
    int choice, value;

    do {
        cout << "\nWhat do you want to do\n";
        cout << "1. Add a number to the front\n";
        cout << "2. Add a number to the back\n";
        cout << "3. Remove the first number\n";
        cout << "4. Remove the last number\n";
        cout << "5. Look for a number\n";
        cout << "6. Show all numbers\n";
        cout << "0. Quit\n";
        cout << "Pick a number from 0 to 6: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "What number ";
                cin >> value;
                list.insertAtBeginning(value);
                cout << "Added " << value << " to the front\n";
                break;

            case 2:
                cout << "What number ";
                cin >> value;
                list.insertAtEnd(value);
                cout << "Added " << value << " to the back\n";
                break;

            case 3:
                list.deleteFirst();
                cout << "Removed the first number.\n";
                break;

            case 4:
                list.deleteLast();
                cout << "Removed the last number.\n";
                break;

            case 5:
                cout << "Which number are you looking for ";
                cin >> value;
                if (list.search(value)) {
                    cout << "Yes " << value << " is in the list\n";
                } else {
                    cout << "No " << value << " is not in the list\n";
                }
                break;

            case 6:
                cout << "Here is your list\n";
                list.display();
                break;

            case 0:
                cout << "Thanks for using the program\n";
                break;

            default:
                cout << "Please pick a number from 0 to 6\n";
        }
    } while (choice != 0);

    return 0;
}
