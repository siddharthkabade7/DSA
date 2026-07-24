#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 0 || n == 1)
    {
        return 1; 
    }

    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n < 0)
    {
        cout << "Factorial is not defined for negative numbers.";
    }
    else
    {
        cout << "Factorial of " << n << " is " << fact(n);
    }

    return 0;
}