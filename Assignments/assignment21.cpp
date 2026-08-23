#include <iostream>
#include <string>
using namespace std;

class Student {    // class student 
public:
                       // Structure to store student details
    struct Details {
        string name;
        int prn;
        int marks;
    };

private:
    Details d[100];
    int n;

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

    cout << "\n-------------------------------------------";

    for (int i = 0; i < n; i++) {

        cout << "\nName  : " << d[i].name;
        cout << "\nPRN   : " << d[i].prn;
        cout << "\nMarks : " << d[i].marks;
        cout << "\n-------------------------------------------";
    }
}


    // Bubble Sort by Marks
    void sortingbymarks() {

        for (int i = 0; i < n - 1; i++) {

            for (int j = 0; j < n - 1 - i; j++) {

                if (d[j].marks > d[j + 1].marks) {

                    swap(d[j], d[j + 1]);
                }
            }
        }

        cout << "\nStudents sorted successfully using Bubble Sort (Marks).\n";
    }


    // Bubble Sort by Name
    void sortingbyname() {

        for (int i = 0; i < n - 1; i++) {

            for (int j = 0; j < n - 1 - i; j++) {

                if (d[j].name > d[j + 1].name) {

                    swap(d[j], d[j + 1]);
                }
            }
        }

        cout << "\nStudents sorted successfully using Bubble Sort (Name).\n";
    }


    // Insertion Sort by Marks
    void insertionsortbymarks() {

        for (int i = 1; i < n; i++) {

            Details key = d[i];
            int j = i - 1;

            while (j >= 0 && d[j].marks > key.marks) {

                d[j + 1] = d[j];
                j--;
            }

            d[j + 1] = key;
        }

        cout << "\nStudents sorted successfully using Insertion Sort.\n";
    }


    // Selection Sort by Marks
    void selectionsortbymarks() {

        for (int i = 0; i < n - 1; i++) {

            int min = i;

            for (int j = i + 1; j < n; j++) {

                if (d[j].marks < d[min].marks) {

                    min = j;
                }
            }

            swap(d[i], d[min]);
        }

        cout << "\nStudents sorted successfully using Selection Sort.\n";
    }

};

 // main function for invoking other function and printing output
int main() {

    Student s;   // create student object

    s.getdata();

    int choice;

    do {

        cout << "\n========== MENU ==========";
        cout << "\n1. Display Students";
        cout << "\n2. Bubble Sort by Marks";
        cout << "\n3. Bubble Sort by Name";
        cout << "\n4. Insertion Sort by Marks";
        cout << "\n5. Selection Sort by Marks";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";

        cin >> choice;

        switch (choice) {

        case 1:

            cout << "\nStudent Details:\n";
            s.displaydata();
            break;

        case 2:

            s.sortingbymarks();

            cout << "\nStudent Details after Bubble Sort by Marks:\n";
            s.displaydata();
            break;

        case 3:

            s.sortingbyname();

            cout << "\nStudent Details after Bubble Sort by Name:\n";
            s.displaydata();
            break;

        case 4:

            s.insertionsortbymarks();

            cout << "\nStudent Details after Insertion Sort:\n";
            s.displaydata();
            break;

        case 5:

            s.selectionsortbymarks();

            cout << "\nStudent Details after Selection Sort:\n";
            s.displaydata();
            break;

        case 6:

            cout << "\nExiting Program...\n";
            break;

        default:

            cout << "\nInvalid Choice! Please Enter 1 to 6.\n";
        }

    } while (choice != 6);

    return 0;
}