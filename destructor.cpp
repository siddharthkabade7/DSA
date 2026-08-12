#include <iostream>
using namespace std;

class Student {
public:

    // Constructor
    Student() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {

    Student s1;

    cout << "Inside main" << endl;

    return 0;
}