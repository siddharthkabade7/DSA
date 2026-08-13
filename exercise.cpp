#include <iostream>
#include <cmath>
using namespace std;

class simplecalc
{
public:
    void operations(int a, int b)
    {
        cout << "Sum: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Product: " << a * b << endl;
        cout << "Division: " << (float)a / b << endl;
    }
};

class scientificcalc
{
public:
    void scientific_operations(int a, int b)
    {
        cout << "Square root of a: " << sqrt(a) << endl;
        cout << "Square root of b: " << sqrt(b) << endl;
        cout << "Power: " << pow(a, b) << endl;
        cout << "Maximum: " << max(a, b) << endl;
    }
};

class hybridcalc : public simplecalc, public scientificcalc
{
    int a, b;

public:
    void get_nums()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void calculate()
    {
        operations(a, b);
        scientific_operations(a, b);
    }
};

int main()
{
    hybridcalc calc;

    calc.get_nums();
    calc.calculate();

    return 0;
}