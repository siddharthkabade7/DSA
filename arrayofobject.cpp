#include <iostream>
using namespace std;

class employee
{ // class declaration
    int id;
    int salary;

public:
    void setdata()
    { // function to set data
        cout << "Enter the id of employee: ";
        cin >> id;
    }
    void printdata()
    { // function to print data
        cout << "The id of employee is " << id << endl;
    }
};

int main()
{
    employee emp[3]; // array of objects
    for (int i = 0; i < 3; i++)
    {
        emp[i].setdata();
    }
    for (int i = 0; i < 3; i++)
    {
        emp[i].printdata();
    }
}