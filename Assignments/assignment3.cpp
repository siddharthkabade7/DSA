#include <iostream>
#include <string>
using namespace std;

struct patient {
    int id;
    string name;
    string condition;
    patient *next;
};

// Add Patient
void addpatient(patient *&head, patient *&tail) {
    patient *newPatient = new patient;

    cout << "Enter Patient ID: ";
    cin >> newPatient->id;

    cout << "Enter Patient Name: ";
    cin >> newPatient->name;

    cout << "Enter Patient Condition: ";
    cin >> newPatient->condition;

    newPatient->next = NULL;

    if (head == NULL) {
        head = newPatient;
        tail = newPatient;
    } else {
        tail->next = newPatient;
        tail = newPatient;
    }
}

// Display Patients
void display(patient *head) {
    if (head == NULL) {
        cout << "\nNo Records Found!";
        return;
    }

    while (head != NULL) {
        cout << "\nPatient ID : " << head->id;
        cout << "\nName       : " << head->name;
        cout << "\nCondition  : " << head->condition;
        cout << "\n----------------------";

        head = head->next;
    }
}

// Remove Patient
void removepatient(patient *&head, patient *&tail) {
    int id;
    cout << "\nEnter Patient ID to Remove: ";
    cin >> id;

    patient *temp = head;
    patient *prev = NULL;

    while (temp != NULL && temp->id != id) {
        prev = temp;            // Keep track of the previous node at beginning temp is null them it become head node and likewise keep tack of the previous node so that we can delete the node and link the previous node to the next node
        temp = temp->next;     // Move to the next node
    }

    if (temp == NULL) {            // it means the record is not found and we can return from the function
        cout << "\nRecord Not Found!";   
        return;
    }

    if (prev == NULL) {       // it means the record is found at the head node and we
        head = temp->next;    // can delete the head node and link the head node to the next node

        if (head == NULL)
            tail = NULL;
    } else {
        prev->next = temp->next;   //it is for updeting tail node if record is found at last node
                                   // then delete last node and updete the tail node to the previous node.
        if (temp == tail)
            tail = prev;
    }

    delete temp;

    cout << "\nRecord Deleted Successfully!";
}

// Search Patient
void searchpatient(patient *head) {
    int id;

    cout << "\nEnter Patient ID to Search: ";
    cin >> id;

    while (head != NULL) {
        if (head->id == id) {
            cout << "\nPatient Found!";
            cout << "\nPatient ID : " << head->id;
            cout << "\nName       : " << head->name;
            cout << "\nCondition  : " << head->condition;
            return;
        }

        head = head->next;
    }

    cout << "\nRecord Not Found!";
}

int main() {
    patient *head = NULL;
    patient *tail = NULL;

    int choice;

    do {
        cout << "\n\n===== Patient Record System =====";
        cout << "\n1. Add Patient";
        cout << "\n2. Display Patients";
        cout << "\n3. Remove Patient";
        cout << "\n4. Search Patient";
        cout << "\n5. Exit";
        cout << "\n\n Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addpatient(head, tail);
            break;

        case 2:
            display(head);
            break;

        case 3:
            removepatient(head, tail);
            break;

        case 4:
            searchpatient(head);
            break;

        case 5:
            cout << "\nThank You!";
            break;

        default:
            cout << "\nInvalid Choice!";
        }

    } while (choice != 5);

    return 0;
}