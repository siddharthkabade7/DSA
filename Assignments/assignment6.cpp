#include <iostream>
using namespace std;

class Stack {
public:
    string stack[50];
    string action[50];
    int top = -1;

    void Insert(string S) {
        if (top == 49) {
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        stack[top] = S;
        action[top] = "Insert";
    }

    void Delete(string S) {
        if (top == 49) {
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        stack[top] = S;
        action[top] = "Delete";
    }

    void undo() {
        if (top == -1) {
            cout << "Nothing to undo.\n";
            return;
        }

        if (action[top] == "Insert") {
            cout << "Undo Insert: " << stack[top] << endl;
        }
        else {
            cout << "Undo Delete: " << stack[top] << endl;
        }

        top--;
    }

    void Top() {
        if (top == -1) {
            cout << "Stack Empty.\n";
            return;
        }

        cout << stack[top] << endl;
    }
};

int main() {
    Stack s;

    s.Insert("Hello");
    s.Insert(" World");
    s.Delete(" World");

    cout << "Last action: ";
    s.Top();

    cout << "\nUndo operations:\n";

    s.undo();
    s.undo();
    s.Top();
    return 0;
}
