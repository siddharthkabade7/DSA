#include<iostream>
using namespace std;

void printnumberandalpha(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i%2==0){
                cout<<j+1;
            }
            else{
                char ch='A';
                cout<<ch+j;
            }
        }
    }

    
}

int main(){
    int n=4;
    printnumberandalpha(n);
    return 0;
}