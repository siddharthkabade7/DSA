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

    void displaydata() {

        for (int i = 0; i < n; i++) {

            cout << "\nName  : " << d[i].name << endl;
            cout << "PRN   : " << d[i].prn << endl;
            cout << "Marks : " << d[i].marks << endl;
        }
    }
};

int main(){
    student s1;
    s1.getdata();
    s1.displaydata();
    return 0;
}
