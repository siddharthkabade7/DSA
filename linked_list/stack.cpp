#include <iostream>
using namespace std;
void push(int stack[],int &top,int value){
        if(top == 4){
            cout << "Stack Overflow" << endl;
        }
        else{
            top++;
            stack[top] = value;
        }
    }
void display(int stack[],int top){
        if(top == -1){
            cout << "Stack is empty" << endl;
        }
        else{
            cout << "Stack elements: ";
            for(int i=top;i>=0;i--){
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
void pop(int stack[],int &top){
    if(top==-1){
        cout << "Stack Underflow" << endl;
    }
    else{
        cout << "Popped element: " << stack[top] << endl;
        top--;
    }
}
void peek(int stack[],int top){
    if(top==-1){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Top element: " << stack[top] << endl;
    }
}
int main()
{
    int stack[5];
    int top = -1;
    
    int value;
    for(int i=0;i<5;i++){
        cout << "Enter value to push: ";
        cin >> value;
        push(stack,top,value);
    }
    
    display(stack,top);
    pop(stack,top);
    display(stack,top);
    peek(stack,top);
    return 0;
}