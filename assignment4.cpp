#include <iostream>
using namespace std;

class Train {
    struct Node {
        string station;
        Node *prev;
        Node *next;
    };

    Node *head;

public:
    Train() {
        head = NULL;
    }

    void getStation() {
        int n;
        cout << "Number of station: ";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            Node *newnode = new Node;

            cout << "Enter Station Name: ";
            cin >> newnode->station;

            newnode->prev = NULL;
            newnode->next = head;

            if (head != NULL) {
                head->prev = newnode;
            }

            head = newnode;
        }
    }

    void display() {
        cout << "----- Stations are -----\n";

        Node *temp = head;

        while (temp != NULL) {
            cout << temp->station << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    void insertStation() {
        Node *newnode = new Node;

        cout << "Enter Station Name: ";
        cin >> newnode->station;

        newnode->prev = NULL;
        newnode->next = head;

        if (head != NULL) {
            head->prev = newnode;
        }

        head = newnode;
    }

    void deletestation() {
        Node *temp = head;
        string name;

        cout << "Enter Station Name for delete: ";
        cin >> name;

        while (temp != NULL && temp->station != name) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Station not found\n";
            return;
        }

        // If deleting the first station
        if (temp == head) {
            head = head->next;

            if (head != NULL) {
                head->prev = NULL;
            }

            delete temp;
            cout << "Station deleted\n";
            return;
        }

        // If deleting any other station
        temp->prev->next = temp->next;

        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }

        delete temp;

        cout << "Station deleted\n";
    }

    void search() {
        Node *temp = head;
        string name;

        cout << "Enter Station Name for search: ";
        cin >> name;

        while (temp != NULL && temp->station != name) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Station not found\n";
            return;
        }
        else {
            cout << "Station found\n";
        }
    }

    void reverseDisplay() {
        Node *temp = head;

        // Go to the last station
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Print in reverse
        while (temp != NULL) {
            cout << temp->station << " ";
            temp = temp->prev;
        }

        cout << endl;
    }
};

int main() {
    Train t;

    while (true) {
        cout << "\n------MENU------\n";
        cout << "\n1. ADD Station";
        cout << "\n2. Display Station";
        cout << "\n3. Insert Station";
        cout << "\n4. Delete Station";
        cout << "\n5. Search Station";
        cout << "\n6. Display Station in reverse order";
        cout << "\n7. Exit";

        int ch;
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            t.getStation();
            break;

        case 2:
            t.display();
            break;

        case 3:
            t.insertStation();
            break;

        case 4:
            t.deletestation();
            break;

        case 5:
            t.search();
            break;

        case 6:
            t.reverseDisplay();
            break;

        case 7:
            cout << "Thank You";
            return 0;

        default:
            cout << "\nWrong input";
            cout << "\nEnter correct input\n";
        }
    }

    return 0;
}