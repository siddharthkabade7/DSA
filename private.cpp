#include <iostream>
using namespace std;

class base {
private:
    int data1; 

protected:
    int data2;
};

class derived : protected base {
public:
    void setData() {
        // data1 = 10;  // ❌ Error: data1 is private in base
        data2 = 20;     // ✅ Allowed: data2 is protected
    }

    void getData() {
        // cout << data1;  // ❌ Error
        cout << data2 << endl;  // ✅ Allowed
    }
};

int main() {
    derived der;

    der.setData();
    der.getData();

    return 0;
}