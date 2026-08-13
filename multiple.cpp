#include<iostream>
using namespace std;

class base1{
    protected:
    int base1int;
    public:
    void setbase1int(int a){
        base1int=a;
    }
};

class base2{
    protected:
    int base2int;
    public:
    void setbase2int(int a){
        base2int=a;
    }
};

class derive:public base1,public base2{
    public:
    void show();
};

void derive :: show(){
    cout<<"value of base1 :"<<base1int<<endl;
    cout<<"value of base2 :"<<base2int<<endl;
    cout<<"sum:"<<base1int+base2int<<endl;
}
int main(){
    derive sid;
    sid.setbase1int(5);
    sid.setbase2int(10);
    sid.show();
    return 0;

}