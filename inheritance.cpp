#include <iostream>
using namespace std;

class employee {
public:
    int id;
    float salary;

    employee(int inpId) {
        id = inpId;
        salary = 34.0;
    }   
};

class programmer : public employee {
public:
    programmer(int inpId) : employee(inpId) {
    }

    int languageCode = 9;

    void getData() {
        cout << id << endl;
    }
};

int main() {

    employee sid(1), yathu(2);

    cout << sid.salary << endl;
    cout << yathu.salary << endl;

    programmer skillF(10);

    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;

    skillF.getData();

    return 0;
}