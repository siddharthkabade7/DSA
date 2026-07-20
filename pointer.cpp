#include<iostream>
using namespace std;

class PointerExample {
    public:
    void pointerdemo(){
        int a = 10;
        int* ptr = &a; // pointer to integer
        cout << "Value of a: " << a << endl;
        cout<<"address of a:"<<ptr<<endl;
        cout << "Address of a: " << &a << endl;
        cout<< "Value at pointer ptr: " << *ptr << endl; // dereferencing pointer

        //pointer to pointer
        int** ptr2 = &ptr; // pointer to pointer
        cout << "Address of ptr: " << &ptr << endl; 
        cout << "Value at pointer ptr2: " << *ptr2 << endl; // dereferencing pointer to pointer
    }
};
int main(){
        PointerExample p;
        p.pointerdemo();
        return 0;
}
