#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    vector<int> marks;

    // Function to take input
    void inputMarks(int n) {
        cout << "Enter " << n << " marks:\n";

        for (int i = 0; i < n; i++) {
            int mark;
            cin >> mark;
            marks.push_back(mark);
        }
    }

    void displayMarks() {
        cout << "Marks entered:\n";
        for(int mark:marks){
            cout<<mark<<" ";
        }
    }

};

int main(){
    Student s;
    int n;
    cout<<"enter the number of marks: ";
    cin>>n;
    s.inputMarks(n);
    s.displayMarks();
    return 0;
   
}