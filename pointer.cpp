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
    }
};
int main(){
        PointerExample p;
        p.pointerdemo();
        return 0;
}
