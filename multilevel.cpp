#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void student::set_roll_no(int r)
{
    roll_no = r;
}
void student::get_roll_no(void)
{
    cout << "Roll No: " << roll_no << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam::get_marks()
{
    cout << "Marks in Maths: " << maths << endl;
    cout << "Marks in Physics: " << physics << endl;
}

class result : public exam
{
    float per;

public:
    void display();
};

void result::display()
{
    get_roll_no();
    get_marks();
    per = (maths + physics) / 2;
    cout << "Percentage: " << per << "%" << endl;
}

int main()
{
    result sid;
    sid.set_roll_no(134);

    sid.set_marks(99.0, 96.0);
    sid.display();

    return 0;
}