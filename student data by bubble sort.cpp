#include <iostream>
using namespace std;

class Student {
public:

    struct Details {
        string name;
        int prn;
        int marks;
    };

private:
    Details d[100];   // Array of students
    int n;            // Number of students

public:

    // Input student data
    void getdata() {
        cout << "Enter total number of students: ";
        cin >> n;

        for (int i = 0; i < n; i++) {

            cout << "\nStudent " << i + 1 << endl;

            cout << "Enter Name: ";
            cin >> d[i].name;

            cout << "Enter PRN: ";
            cin >> d[i].prn;

            cout << "Enter Marks: ";
            cin >> d[i].marks;
        }
    }


    // Display student data
    void displaydata() {

        for (int i = 0; i < n; i++) {

            cout << "\nName  : " << d[i].name << endl;
            cout << "PRN   : " << d[i].prn << endl;
            cout << "Marks : " << d[i].marks << endl;
        }
    }


    // Bubble sort by marks
    void sortingbymarks() {

        for (int i = 0; i < n - 1; i++) {

            for (int j = 0; j < n - 1 - i; j++) {

                if (d[j].marks > d[j + 1].marks) {
                    swap(d[j], d[j + 1]);
                }

            }
        }
    }


    // Bubble sort by name
    void sortingbyname() {

        for (int i = 0; i < n - 1; i++) {

            for (int j = 0; j < n - 1 - i; j++) {

                if (d[j].name > d[j + 1].name) {
                    swap(d[j], d[j + 1]);
                }

            }
        }
    }

};


int main() {

    Student s;

    s.getdata();

    int choice;

    do {

        cout << "\n========== MENU ==========";
        cout << "\n1. Display Students";
        cout << "\n2. Sort by Marks";
        cout << "\n3. Sort by Name";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";

        cin >> choice;


        switch(choice) {

            case 1:
                cout << "\nStudent Details:\n";
                s.displaydata();
                break;


            case 2:
                s.sortingbymarks();

                cout << "\nStudent Details after sorting by marks:\n";
                s.displaydata();
                break;


            case 3:
                s.sortingbyname();

                cout << "\nStudent Details after sorting by name:\n";
                s.displaydata();
                break;


            case 4:
                cout << "\nExiting program...";
                break;


            default:
                cout << "\nInvalid choice! Please enter 1-4.";
        }


    } while(choice != 4);


    return 0;
}