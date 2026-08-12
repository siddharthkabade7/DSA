#include <iostream>
using namespace std;

class base {
    int data1;    // private by default

public: 
    int data2;    // public by default

    void setData();  // public member function to set data
    int getData1();  // public member function to get data1
    int getData2();  // public member function to get data2
};

void base::setData() {  // public member function to set data
    data1 = 10;
    data2 = 20;
}

int base::getData1() {  // public member function to get data1

    return data1;
}

int base::getData2() {  // public member function to get data2
    return data2;
}

class derived : public base {
    int data3;

public:
    void process();
    void display();
};

void derived::process() {
    data3 = data2 * getData1();
}

void derived::display() {
    cout << "Value of data1 is " << getData1() << endl;
    cout << "Value of data2 is " << data2 << endl;
    cout << "Value of data3 is " << data3 << endl;
}

int main() {
    derived der;

    der.setData();
    der.process();
    der.display();

    return 0;
}