#include<iostream>
using namespace std;

class student{
    int marks;
    public:
    student();

    void printmarks(){
        cout<<"mark :"<<marks;
        
    }
};

student :: student(void){
    marks = 50;
    cout<<"hello world";
}

int main(){
    student s;
    s.printmarks();
    return 0;
    
}