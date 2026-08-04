#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    // Function to set values
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    // Function to display values
    void display()
    {
        cout << a << " + " << b << "i" << endl;
    }

    // Friend function declaration
    friend Complex sumComplex(Complex c1, Complex c2);
};

// Friend function definition
Complex sumComplex(Complex c1, Complex c2)
{
    Complex c3;

    // Accessing private members using dot operator
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;

    return c3;
}

int main()
{
    Complex c1, c2, c3;

    c1.setData(1, 4);
    c2.setData(3, 5);

    c3 = sumComplex(c1, c2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}