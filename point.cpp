#include<iostream>
using namespace std;

class point{
    int a,b;
    public:
    point(int x,int y){
        a=x;
        b=y;
    }
    void displaypoint(){
        cout<<a<<" "<<b;
    }
};

int main(){
    point p(2,3);
    point q(2,5);
    p.displaypoint();
    q.displaypoint();
}