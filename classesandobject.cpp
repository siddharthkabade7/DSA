#include<iostream>
using namespace std;

class employee{
    private:
        int empId;
        int salary;
    public:
        int tow;
        void data(int empID,int salary);
        void gdata(){
            cout<<"The empId is "<<empId<<endl;
            cout<<"The salary is "<<salary<<endl;
            cout<<"The tow is "<<tow<<endl;
        }
};

void employee::data(int empID,int salary){
    empId=empID;
    this->salary=salary;
}

int main(){
    employee sid;
    sid.tow=8;
    sid.data(1,10000);
    sid.gdata();
    return 0;
}